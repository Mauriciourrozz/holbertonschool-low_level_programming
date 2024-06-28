#include "main.h"

/**
 * num_prim - define que numero es primo
 * @n: numero
 * @i: divisor
 * Return: 0 si no es primo y 1 si si lo es
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
