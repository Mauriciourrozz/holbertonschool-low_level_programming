#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatena dos cadenas
 * @s1: cadena
 * @s2: cadena
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int largo1;
	int largo2;
	char *combi;
	int copia1;
	int copia2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (largo1 = 0; s1[largo1] != '\0'; largo1++)
	{
	}
	for (largo2 = 0; s2[largo2] != '\0'; largo2++)
	{
	}

	combi = malloc((largo1 + largo2 + 1) * sizeof(char));

	if (combi == 0)
	{
		return (NULL);
	}

	for (copia1 = 0; copia1 < largo1; copia1++)
	{
		combi[copia1] = s1[copia1];
	}
	for (copia2 = 0; copia2 < largo2; copia2++)
	{
		combi[largo1 + copia2] = s2[copia2];
	}
	combi[largo1 + largo2] = '\0';
	return (combi);
}
