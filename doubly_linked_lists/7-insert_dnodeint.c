#include <stdlib.h>
#include "lists.h"
/**
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nuevonodo = malloc(sizeof(dlistint_t));

	if (nuevonodo == NULL)
		return (NULL);

	nuevonodo->n = n;
	nuevonodo->prev = NULL;
	nuevonodo->next = NULL;

	return (nuevonodo);
}
