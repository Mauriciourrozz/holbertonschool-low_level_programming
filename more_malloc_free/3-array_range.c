#include "main.h"
#include <stdlib.h>
/**
 * array_range - matriz de numeros
 *(similar a una cadena pero de numeros, no termina con caracter nulo)
 * @min: valores minimos que deben estar incluidos
 * @max: valores maximos que deben estar incluidos
 * Return: puntero a la matriz
 */
int *array_range(int min, int max)
{
	int len;
	int *range;
	int a;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	range = malloc(len * sizeof(int));

	if (range == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len; a++)
	{
		range[a] = min;
		min++;
	}
	return (range);

}
