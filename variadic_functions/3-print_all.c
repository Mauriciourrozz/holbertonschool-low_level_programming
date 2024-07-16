#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - imprime algo
 * @format: lista de argumentos
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list argum;
	char *aux;

	va_start(argum, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(argum, int));
				break;
			case 'i':
				printf("%d, ", va_arg(argum, int));
				break;
			case 'f':
				printf("%f .5, ", va_arg(argum, double));
				break;
			case 's':
				aux = va_arg(argum, char *);
				if (aux == NULL)
				{
					printf("(nil)");
					break;
				}
					printf("%s", aux);
				break;
		}
		i++;
	}
	va_end(argum);
	printf("\n");
}
