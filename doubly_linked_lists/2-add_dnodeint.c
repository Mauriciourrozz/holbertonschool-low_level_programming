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
	dlistint_t *nuevonodo = malloc(sizeof(dlistint_t)); /*reservamos memoria para un nuevo nodo*/

	if (nuevonodo == NULL) /*si la asignacion fala retorna NULL*/
	{
		return (NULL);
	}

	nuevonodo->n = n; /*asignamos el valor al nuevo nodo (n ya esta definido y le asignamos el valor)*/
	nuevonodo->prev = NULL; /*asignamos primer lugar al nodo, no tiene nodo anterior*/
	nuevonodo->next = *head; /*el siguiente nodo sera el primer nodo de la lista(osea elnodo que estaba antes en lacabeza)*/

	if (*head != NULL) /*si la lista no estaba vacia, se actualiza 'prev' del antiguo 1er nodo para que apunte al nuevo*/
	{
		(*head)->prev = nuevonodo;
	}
	*head = nuevonodo; /*Se actualiza el puntero a la cabeza de la lista para que apunte al nuevo nodo, que ahora es el primer nodo de la lista.*/

	return (nuevonodo);
}
