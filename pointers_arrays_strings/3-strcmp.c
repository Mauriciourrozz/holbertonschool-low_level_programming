#include "main.h"

/**
 * _strcmp - compara dos cadenas
 * @s1: una cadena
 * @s2: otra cadena
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (; s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			a = (s1[a] > s2[a]) ? 1 : -1;
			break;
		}
	}
	return (a);

}
