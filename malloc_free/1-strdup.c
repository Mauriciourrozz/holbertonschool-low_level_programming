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

	if (str == NULL) /* veo si el string que me pasaron es null */
	{
		return (NULL);
	}
	for (len = 0; len[str] != '\0'; len++) /* cuento el largo del string que me pasaron, tambien se puede hacer asi: size = _strlen(str) + 1 (+1 para que cuente el '\0')*/
	{
	}

	dup = malloc(len + 1 * sizeof(char)); /* reservo el espacio en la memoria dinamicamente */

	if (dup == NULL) /* pruebo si malloc fallo (por falta de espacio por ej.) */
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++) /* recorro el dupy voy asignando los valores correspondientes */
	{
		dup[i] = str[i];
	}
	i++;  /* avanzo i para poder colocar el caracter nulo*/
	dup[i] = '\0';

	return (dup);
}
