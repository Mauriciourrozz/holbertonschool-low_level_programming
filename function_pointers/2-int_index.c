#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - busca un numero entero
 * @array: array
 * @size: tama√o
 * @cmp: puntero a la funcion
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if ( array == NULL || size <= 0)
	{
		return (-1);
	}

	if (cmp == NULL)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}

	return (-1);
}
