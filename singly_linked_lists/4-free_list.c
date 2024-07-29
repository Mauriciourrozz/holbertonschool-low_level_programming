#include <stdlib.h>
#include "lists.h"
/**
 * free_list - libera la lista list_t
 * @head: Head
 * Return: nada
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head != NULL)
	{
		a = head->next;
		free(head->next);
		head = a;
	}
	free(head);
}
