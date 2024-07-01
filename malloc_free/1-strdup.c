#include "main.h"
#include <stdlib.h>

/**
 *
 */
char *_strdup(char *str)
{
	char *dup;
	int len;
	int i;

	// me fijo si el string que me pasaron es nulo
	if (str == NULL)
	{
		return(NULL);
	}
	// cuento el largo del string que me pasaron
	for (len = 0; len[str] != '\0'; len++)
	{
	}
	
	// reservo el espacio dinamicamente dependiendo del string qe me pasaron
	dup = malloc(len + 1 * sizeof(char));

	// me fijo si el malloc fallo
	if (dup == NULL)
	{
		return (NULL);
	}

	// recorro el dup (el espacio de memoria donde ira la copia del string) y voy asignando los valores correspondientes
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	// avanzo i para poder colocar el caracter nulo al final :)
	i++;
	dup[i] = '\0';



	// termine xd
	return (dup);
}
