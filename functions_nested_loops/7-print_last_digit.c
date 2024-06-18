#include "main.h"

/**
 * print_last_digit - imprime el utimo digito
 * @n: es el ulimo digito
 * Return: 0
 */
int print_last_digit(int n)
{
	int ult = n % 10;
	int ultneg = n * -1;

	if (ult >= 0)
	{
		_putchar(ult);
		return (ult);
	}
	else
	{
		_putchar(ultneg);
		return (ultneg);
	}
}
