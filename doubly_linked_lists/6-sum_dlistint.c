#include "lists.h"
/**
 * sum_dlistint - suma los datos de todos los nodos
 * @head: head
 * Return: suma de los nodos
 */
int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	while (head != NULL)
	{
		suma += (head->n); //asi voy sumando los nodos y los guardo en la variable suma, el += es para que agregue cada valor y lo guarde
		head = head->next;
	}
	return (suma);
}
