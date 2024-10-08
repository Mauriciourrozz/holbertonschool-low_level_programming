#include <stddef.h>
#include "lists.h"
/**
 * dlistint_len - Funcion que devuelve la cantidad de elementos
 * @h: h
 * Return: Cantidad de elementos
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
