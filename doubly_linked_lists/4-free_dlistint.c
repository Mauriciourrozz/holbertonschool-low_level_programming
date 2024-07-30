#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - libera un nodo
 * @head: head
 * Return: nada
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a->next);
	}
}
