#include "main.h"
#include <stdlib.h>

/**
 * _strdup - retorna un puntero
 * @str: Cadena
 * Return: dup.
 */
char *_strdup(char *str)
{
	char *dup;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; len[str] != '\0'; len++)
	{
	}

	dup = malloc(len + 1 * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	i++;
	dup[i] = '\0';

	return (dup);
}
