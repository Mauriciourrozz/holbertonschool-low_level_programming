#include "main.h"

/**
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;
	int copy;

	for (count = 0; dest[count] != 0; count++)
	{
	}
	for (copy = 0; src[copy] != 0 && copy >= n; copy++)
	{
		dest[count] = src[copy];
	}
	return(0);
}
