#include "main.h"

/**
 *
 */
int num_prim(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (num_prim(n, i + 1));
}

/**
 * is_prime_number - calcula si un numero es primo
 * @n: numero
 * Return: 1 si es primo 0 si no
 */
int is_prime_number(int n)
{
	return (num_prim(n, 2));
}
