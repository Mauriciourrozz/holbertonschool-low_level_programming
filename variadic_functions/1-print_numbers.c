#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - imprime numeros
 * @separator: es lo que se imprime entre los num, (, )
 * @n: son los numeros
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argum; // se declara para ver la lista de argumentos
	unsigned int i; // para el bucle

	va_start(argum, n); //inicializa argum para que apunte a n 

	for (i = 0; i < n; i++) // mientras i , n accede a cada lugar de n y se imprime
	{
		printf("%d", va_arg(argum, unsigned int)); // %d porque es un entero y el resto indica que queremos que sea ese enero, en este caso obtiene el siguiente argumento de tipo unsigned int y lo imprime
		if (i < n - 1 && separator != NULL) // i < n - 1 es porque la , y el espacio lo imprimira en todos menos el ultimo numero (caso borde)
		{
			printf("%s", separator);
		}
	}
	va_end(argum);
	printf("\n");
}
