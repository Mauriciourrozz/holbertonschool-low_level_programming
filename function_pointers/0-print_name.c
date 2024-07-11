#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - imprime el nombre
 * @name: nombre
 * @f: es el puntero a la funcion
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
