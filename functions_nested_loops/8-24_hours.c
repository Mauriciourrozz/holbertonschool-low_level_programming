#include "main.h"

/**
 * jack_bauer - Imprime la hora
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

		for (a = 0; a <= 2; a++)
	{


			for (b = 0; b <= 9 && (a == 2 ? b <= 3 : 1); b++)
		{



				for (c = 0; c <= 5; c++)
			{



					for (d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');


				}
			}
		}
	}

}
