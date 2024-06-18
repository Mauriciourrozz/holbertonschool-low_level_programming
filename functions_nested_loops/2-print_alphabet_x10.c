#include "main.h"

/**
 * print_alphabet_x10: Imprime el alfabeto
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char abc = 'a';
	int linea = 0;

		if (abc <= 'z')
		{
			_putchar(abc);
			abc++;
		}

		for (linea = 0 ; linea <= 10 ; linea++)
	
	_putchar('\n');
}
