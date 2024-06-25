#include "main.h"

/**
 * _strncpy - copia la cadena
 * @dest: dest
 * @src: src
 * @n: n
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}

	return (dest);
}
