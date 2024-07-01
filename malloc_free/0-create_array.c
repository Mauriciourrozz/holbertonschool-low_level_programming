#include "main.h"
#include <stdlib.h>
/**
 * create_array - funcion
 * @size: size
 * @c: c
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr; /* puntero de arreglo dinamico que se va a crear */
	unsigned int a; /*a es una variable que se usara como indice en el buce for */

	arr = (char *)malloc(size * sizeof(char)); /* reserva la memoria para el arreglo de size */

	if (size == 0)
	{
		return (NULL); /* si size es 0 devuelve NULL porque no sire asifgnar memoria para un espacio vacio */
	}

	if (arr == NULL)
	{
		return (NULL); /* si malloc devuelve NULL significa que no se pudo asignar la memoria correctamente, pudo ser por falta de espacio u otro motivo */
	}

	for (a = 0; a < size; a++)
	{
		arr[a] = c; /* primero se recorre la cadena y luego se le asigna a cada posicion de a el valor de c, que es el carater especifico pasado como argumento a la funcion */
	}

	return (arr); /* retornamos arr porque lo pide la letra */
}
