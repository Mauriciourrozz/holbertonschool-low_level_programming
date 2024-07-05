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

	for (len1 = 0; s1[len1] != '\0'; len1++) /* calculo largo de s1 y s2 usando for */
	{}
	for (len2 = 0; s2[len2] != '\0'; len2++) 
	{}

	if (n < len2) // si largo de s2 es mayor a n entonces len2 pasa a valer n (la letra pide que de s2 hay que mostrar n bytes)
		len2 = n;
	lentotal = len1 + len2; //variable para largo total, defino el largo de las dos cadenas (len2 ya vale n)
	nconcat = (char *) malloc((lentotal + 1) * sizeof(char)); //reservo espacio de memoria para el largo total

	if (nconcat == NULL) // si falla porque no hay espacio retorno NULL
		return (NULL);

	for (cop1 = 0; s1[cop1] != '\0'; cop1++) // Empiezo a darle los valores a cop1 (copia de s1)
		nconcat[cop1] = s1[cop1];
	for (cop2 = 0; cop2 < len2; cop2++) //le doy los valores a cop2 (copia de s2)
		nconcat[cop1 + cop2] = s2[cop2]; //nconcat[cop1 + cop2] porque sumo las dos cadenas y les asigno valor
	nconcat[cop1 + cop2] = '\0'; //esto es para agregar el caracter nulo

	return (nconcat);
}
