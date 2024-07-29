#include <stdlib.h>
#include "lists.h"
/**
 * free_list - libera la lista list_t
 * @head: Head
 * Return: nada
 */
void free_list(list_t *head)
{


	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
