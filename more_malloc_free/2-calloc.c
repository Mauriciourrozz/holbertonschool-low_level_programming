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


	return (punt);
}
