#include "main.h"

/**
 * _strncat - Concatena
 * @dest: una cadena
 * @src: otra cadena
 * @n: bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
