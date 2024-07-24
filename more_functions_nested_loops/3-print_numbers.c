#include "main.h"
/**
 * print_numbers - imprime los numeros del 1 al 9
 * Return: nada
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
