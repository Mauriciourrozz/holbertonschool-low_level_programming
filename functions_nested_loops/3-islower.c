#include "main.h"

/**
 * _islower - imprime uno si es minuscula y cero si es mayuscula
 * @c: caracter que sera veriicado
 * Return: 0
 */

int _islower(int c)
{
	int min = 1;
	int may = 0;

		if (c <= 90 && c >= 65)
		{
			_putchar(may);
		}
		else
		{
			_putchar(min);
		}

	return (0);
}
