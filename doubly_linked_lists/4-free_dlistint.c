#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - libera un nodo
 * @head: head
 * Return: nada
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
