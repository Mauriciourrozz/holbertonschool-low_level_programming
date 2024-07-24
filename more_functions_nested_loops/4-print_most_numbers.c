#include "main.h"
/**
 * print_most_numbers - Imprime numeros del 0 al 9 sin el 2 y 4
 * Return: nada
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
