#include "main.h"

/**
 * is_prime_number - calcula si un numero es primo
 * @n: numero
 * Return: 1 si es primo 0 si no
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 && n % 1 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (n * is_prime_number(n - 1));
}
