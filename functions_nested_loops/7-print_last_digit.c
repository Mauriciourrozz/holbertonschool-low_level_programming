#include "main.h"

/**
 * print_last_digit - imprime el utimo digito
 * @n: es el ulimo digito
 * Return: 0
 */
int print_last_digit(int n)
{
	int ult = n % 10;
	int ultneg = ult * -1;

	if (ult >= 0)
	{
		_putchar(ult + 48);
		return (ult);
	}
	else
	{
		_putchar(ultneg + 48);
		return (ultneg);
	}
}
