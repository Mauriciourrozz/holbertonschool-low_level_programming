#include "main.h"
/**
 * _isupper - comprueba si un caracter es mayuscula
 * Return: 1 si s mayuscula 0 en el caso contrario
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
