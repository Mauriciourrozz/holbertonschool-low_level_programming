#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - asigna memoria
 * @b: b
 * Return: puntero a la memoria asignada
 */
void *malloc_checked(unsigned int b)
{
	int *checked;

	checked = malloc(b * sizeof(unsigned int *));

	if (checked == NULL)
	{
		exit(98);
	}
	return (checked);

}
