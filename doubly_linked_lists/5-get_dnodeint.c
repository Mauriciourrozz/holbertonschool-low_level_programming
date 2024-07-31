#include "lists.h"
/**
 * get_dnodeint_at_index - Retorna el enecimo nodo de una lista
 * @index: inicio del nodo
 * @head: Head
 * Return: Nodo
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (head);
}
