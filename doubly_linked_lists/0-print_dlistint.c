#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Imprime los elementos de una lista
 * @h: H
 * Return: La cantidad de nodos
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
