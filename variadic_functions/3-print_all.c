#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_last - print_last
 * @format: format
 * @i: i
 */
void print_last(const char * const format, int i)
{
	if (format[i + 1] != '\0')
		printf(", ");
}


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

	/*fcsi*/

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
				case 'c':
					printf("%c", va_arg(argum, int));
					print_last(format, i);
					break;
				case 'i':
					printf("%d", va_arg(argum, int));
					print_last(format, i);
					break;
				case 'f':
					printf("%.6f", va_arg(argum, double));
					print_last(format, i);
					break;
				case 's':
					aux = va_arg(argum, char *);
					if (aux == NULL)
					{
						print_last(format, i);
						printf("(nil)");
						break;
					}
						printf("%s", aux);
						print_last(format, i);
						break;
		}
		i++;
	}
	va_end(argum);
	printf("\n");
}
