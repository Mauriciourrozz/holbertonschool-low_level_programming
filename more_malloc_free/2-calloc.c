#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Asigna memoria para un puntero
 * @nmemb: Es la serie que le queremos asignar memoria
 * @size: Es el tama√o de bytes que queremos devolver de nmemb
 * Return: el puntero a la memoria asignada.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t totalsize;
	char *punt;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	totalsize = nmemb * size;

	punt = malloc(totalsize);

	if (punt == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < totalsize; a++)
	{
		punt[a] = 0;
	}

	return (punt);
}
