#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - aÃade un nodo al inicio de la lista
 * @head: HEAD
 * @n: n
 * Return: La direccion del nuevo nodo
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuevonodo = malloc(sizeof(dlistint_t));

	if (nuevonodo == NULL)
	{
		return (NULL);
	}

	nuevonodo->n = n;
	nuevonodo->prev = NULL;
	nuevonodo->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = nuevonodo;
	}
	*head = nuevonodo;

	return (nuevonodo);
}
