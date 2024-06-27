#include "main.h"

/**
 * factorial - calcula el factorial de un numer
 * @n: n
 * Return: factorial del numero
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
