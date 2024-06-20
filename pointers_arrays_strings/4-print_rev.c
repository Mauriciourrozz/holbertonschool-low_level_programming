#include "main.h"

/**
 * print_rev - Imprime
 *  @s: sera impreso
 *  Return: 0
 */
void print_rev(char *s)
{
	int inicial;
	int b;

	for (inicial = 0; s[inicial] != '\0'; inicial++)

	{
	}

	for (b = inicial - 1; b >= '\0' ; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
