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
	va_list argum;
	unsigned int i;

	va_start(argum, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argum, unsigned int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(argum);
	printf("\n");
}
