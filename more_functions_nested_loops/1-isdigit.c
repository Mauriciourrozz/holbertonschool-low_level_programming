#include "main.h"
/**
 * _isdigit - Verifica si c es un digito
 * @c: es lo que va a ser comprobado
 * Return: 1 si es un digito y 0 si no lo es
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
