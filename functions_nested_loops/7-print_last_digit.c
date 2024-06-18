#include "main.h"

/**
 * print_last_digit - imprime el utimo digito
 * @n: es el ulimo digito
 * Return: 0
 */
int print_last_digit(int r)
{
	if (r % 10)
	{
		_putchar(r);
		return (r);
	}
	else
	{
		_putchar(r);
		return (0);
	}

}
