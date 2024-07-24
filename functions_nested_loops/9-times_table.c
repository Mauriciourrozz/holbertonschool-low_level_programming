#include "main.h"
/**
 * times_table - imprimir las tablas del 1 al 9
 * Return: Nada
 */
void times_table(void)
{
	int fila = 10;
	int i;
	int j;
	int resultado;

	for (i = 0; i < fila; i++)
	{
		for (j = 0; j < fila; j++)
		{
			resultado = i * j;

			if (resultado < 10)
			{
				/*_putchar(' ');*/
				_putchar(resultado + '0');
			}
			else
			{
				_putchar(resultado / 10 + '0');
				_putchar(resultado % 10 + '0');
			}
			if (j != fila - 1)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

