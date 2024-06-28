#include "main.h"

/**
 * raiz_cuad - Calcula la raiz cuadrada de un numero
 * @n: numero
 * @x: x
 * Return: llama a la funcion
 */
int raiz_cuad(int n, int x)
{
	if (n < x)
	{
		return (-1);
	}
	else if (n != x * x)
	{
		x++;
	}
	else
	{
		return (x);
	}

	return (raiz_cuad(n, x));
}

/**
 * _sqrt_recursion - Indica si n tiene raiz cuadrada
 * @n: n
 * Return: La raiz cuadrada y - 1 si no tiene
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	return (raiz_cuad(n, x));
}
