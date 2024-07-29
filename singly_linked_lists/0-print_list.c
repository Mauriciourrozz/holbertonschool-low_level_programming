#include <stdio.h>
#include "lists.h"
/**
 * print_list - Imprime todos los elementos de una lista
 * @h: puntero a list_t, h apunta al primer nodo de la lista enlazada
 * Return: La cantidad de nodos
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{ /*h->str es para acceder al nodo e imprimir lo que queremos*/
			printf("[%i] %s\n", h->len, h->str);
		} /*h->len es para acceder a len en la funcion donde esta la estrucura*/
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
