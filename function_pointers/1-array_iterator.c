#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - arrayiterator
 * @array: Array
 * @size: tamaño del array
 * @action: es el puntero a la funcion
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
