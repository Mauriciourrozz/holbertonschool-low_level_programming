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
	int i;

	checked = malloc(b * sizeof(unsigned int *));

	if (checked == NULL)
	{
		free(checked);
		exit(98);
	}
	for (i = 0; i < checked; i++)
	{
		if (checked == 0)
		{
			free(checked[i]);
			return;
		}
	}
	return (checked);

}
