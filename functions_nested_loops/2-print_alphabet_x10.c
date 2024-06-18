#include "main.h"

/**
 * print_alphabet_x10 - Imprime el alfabeto
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char abc = 'a';
	int linea = 1;


		for (linea = 1 ; linea <= 10 ; linea++)
		{

			for (abc = 'a' ; abc <= 'z' ; abc++)
			{
				_putchar(abc);

			}
			_putchar('\n');

		}
}
