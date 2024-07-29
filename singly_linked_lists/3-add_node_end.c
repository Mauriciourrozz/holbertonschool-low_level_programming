#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include "_strlen.c"
/**
 * add_node_end - Agrega un nodo al final de la lista
 * @head: puntero
 * @str: str
 * Return: la cantidad de nodod
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *nuevo_nodo = (list_t *)malloc(sizeof(list_t));

	if (nuevo_nodo == NULL)
	{
		return (NULL);
	}

	nuevo_nodo->str = strdup(str);
	if (nuevo_nodo->str == NULL)
	{
		free(nuevo_nodo);
		return (NULL);
	}
	nuevo_nodo->len = _strlen(str);

	nuevo_nodo->next = NULL;

	if (*head == NULL)
	{
		*head = nuevo_nodo;
	}
	else
	{

		n = *head;

		while (n->next != NULL)
		{
			n = n->next;
		}
		n->next = nuevo_nodo;
	}

	return (nuevo_nodo);
}
