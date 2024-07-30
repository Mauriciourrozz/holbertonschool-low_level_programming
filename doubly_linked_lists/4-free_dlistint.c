#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - libera un nodo
 * @head: head
 * Return: nada
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL) //me aseguro de que head no sea null (que no este vacio)
		return;

	free_dlistint(head->next); //llamo a la funcion recursivamente mientras avanzo en los nodos siempre que sea distinto de NULL
	free(head); //Libero el espacio
}
