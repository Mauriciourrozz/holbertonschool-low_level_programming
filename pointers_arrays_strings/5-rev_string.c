#include "main.h"

/**
 *rev_string - Da vuelta la cadena
 *@s: Cadena
 */
void rev_string(char *s)
{
	int largo;
	int aux;
	char cambio;

	for (largo = 0; s[largo] != '\0'; largo++)
	{
	}

	for (aux = 0; aux < largo / 2; aux++)
	{
		cambio = s[aux];
		s[aux] = s[largo - aux - 1];
		s[largo - aux - 1] = cambio;
	}
}