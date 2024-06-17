#include "main.h"

/**
 * main - alphabet
 *
 * Return: always 0 (sucess)
 */
void print_alphabet(void)
{
	char abc = 'a';

	while (abc <= 'z')

	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');

}
