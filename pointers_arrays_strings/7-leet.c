#include "main.h"

/**
*leet - Cambia letras por numeros (1337)
*Return: retorna un string
*@string: string ingresado
*/
char *leet(char *string)
{
	int x = 0, y;
	char arr[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (string[x])
	{
		for (y = 0; y <= 7; y++)
		{
			if (string[x] == arr[y] || string[x] - 32 == arr[y])
				string[x] = y + '0';
		}

		x++;
	}

	return (string);
}
