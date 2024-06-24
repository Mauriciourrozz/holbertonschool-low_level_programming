#include "main.h"

/**
 * _strcpy - Copia la cadena
 * @dest: dest
 * @src: src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = '\0';

	return (dest);
}
