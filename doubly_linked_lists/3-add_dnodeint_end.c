#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - AÃade un nuevo nodo al final de la lista
 * @head: head
 * @n: n
 * Return: la direccion del nuevonodo
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevonodo = malloc(sizeof(dlistint_t));
	dlistint_t *t = *head;

	if (nuevonodo == NULL)
	{
		return (NULL);
	}

	nuevonodo->n = n;
	nuevonodo->next = NULL;

	if (*head == NULL)
	{
		nuevonodo->prev = NULL;
		*head = nuevonodo;
		return (nuevonodo);
	}

	while (t->next != NULL)
	{
		t = t->next;
	}

	t->next = nuevonodo;
	nuevonodo->prev = t;

	return (nuevonodo);
}
