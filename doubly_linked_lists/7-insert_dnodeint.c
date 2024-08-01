#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserta un nuevo nodo en una posicion especifica
 * @h: nuevo nodo
 * @idx: indice de la lista donde se debe agregar el nuevo nodo
 * @n: n
 * Return: direccion del nuevo nodo
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nuevonodo = malloc(sizeof(dlistint_t));
	dlistint_t *t;
	unsigned int i;

	if (nuevonodo == NULL)
		return (NULL);

	nuevonodo->n = n;
	/*nuevonodo->prev = NULL;
	nuevonodo->next = NULL;*/

	if (idx == 0)
	{
		(*h)->prev = nuevonodo;
		*h = nuevonodo;
		return (nuevonodo);
	}
	t = *h;

	for (i = 0; t != NULL && i < idx - 1; i++)
		t = t->next;

	if (t == NULL)
	{
		free(nuevonodo);
		return (NULL);
	}

	nuevonodo->next = t->next;
	nuevonodo->prev = t;
	if (t->next != NULL)
	{
		t->next->prev = nuevonodo;
	}
	t->next = nuevonodo;

	return (nuevonodo);
}
