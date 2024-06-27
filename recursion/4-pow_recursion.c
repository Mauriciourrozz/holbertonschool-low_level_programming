#include "main.h"

/**
 * _pow_recursion - Calcula x elevado a y
 * @x: es el valor que sera elevado a y
 * @y: es el valor que eleva a x
 * Return: el valor de x a la y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
