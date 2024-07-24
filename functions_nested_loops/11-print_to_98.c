#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - imprime los numeros naturales de n a 98
 * @n: Numeros
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
