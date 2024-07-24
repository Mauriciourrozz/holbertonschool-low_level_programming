#include "main.h"

/**
*times_table - Imprime las tablas del 1 al 9
*Return: Nada
*/

void times_table(void)
{

	int a;
	int num;
	int resultado;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (num = 1; num <= 9; num++)
		{
			_putchar(',');
			_putchar(' ');

			resultado = a * num;

			if (resultado <= 9)
				_putchar(' ');
			else
				_putchar((resultado / 10) + '0');

			_putchar((resultado % 10) + '0');

		}
		_putchar('\n');
	}

}
