#include "main.h"

/**
 * swap_int - Intercambia los valores de dos enteros
 * @a: Un entero
 * @b: Otro entero
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
