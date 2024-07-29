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
		{
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
