#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatena dos cadenas
 * @s1: Primera cadena
 * @s2: Segunda cadena
 * @n: N es la cantidad de bytes de s2 que quiere que se retorne
 * Return: Cadena concatenada con n bytes de s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, lentotal, cop1, cop2;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}

	if (n < len2)
		len2 = n;
	lentotal = len1 + len2;
	nconcat = (char *) malloc((lentotal + 1) * sizeof(char));

	if (nconcat == NULL)
		return (NULL);

	for (cop1 = 0; s1[cop1] != '\0'; cop1++)
		nconcat[cop1] = s1[cop1];
	for (cop2 = 0; cop2 < len2; cop2++)
		nconcat[cop1 + cop2] = s2[cop2];
	nconcat[cop1 + cop2] = '\0';

	return (nconcat);
}
