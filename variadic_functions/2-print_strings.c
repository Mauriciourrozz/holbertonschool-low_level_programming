#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - imprime la cadena
 * @separator: los separadores (, )
 * @n: numero de cadenas
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argum;
	unsigned int i;

	va_start(argum, n);

	for (i = 0; i < n; i++)
	{
		const char *cad = va_arg(argum, const char *);

		if (cad == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", cad);
		}

		if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	va_end(argum);
	printf("\n");
}
