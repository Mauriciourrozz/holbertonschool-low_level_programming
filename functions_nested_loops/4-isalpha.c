#include "main.h"

/**
 *  _isalpha - imprime
 *  @c: Verifica
 *  Return: 0
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
