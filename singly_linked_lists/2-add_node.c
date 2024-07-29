#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include "_strlen.c"
/**
 * add_node - agrega un nuevo nodo al inicio de la lista
 * @str: str
 * @head: es el inicio de la lista
 * Return: Direccion del nuevo nodo
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo_nodo = (list_t *)malloc(sizeof(list_t));
	//creo el nuevo nodo
	if (nuevo_nodo == NULL)
	{
		return (NULL); //si falla retorno null
	}

	nuevo_nodo->str = strdup(str); //duplico str
	if (nuevo_nodo->str == NULL)
	{
		free(nuevo_nodo); //si falla libero espacio
		return (NULL);
	}

	nuevo_nodo->len = _strlen(str);

	nuevo_nodo->next = *head; //apunto al primer espacio para asignar valor
	*head = nuevo_nodo;

	return (nuevo_nodo);
}
