#include "main.h"

/**
 * _islower - imprime uno si es minuscula y cero si es mayuscula
 * @c: caracter que sera veriicado
 * Return: 0
 */

int _islower(int c)
{

		if (c <= 90 && c >= 65)
		{
			return (1);
		}
		else
		{
			return (0);
		}

}
