#include <stddef.h>
#include "lists.h"
/**
 * list_len - devuelve el numero de elementos de un enlace
 * @h: Lista
 * Return: La cantidad de elementos
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
