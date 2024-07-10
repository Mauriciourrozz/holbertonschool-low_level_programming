#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - libera perritos
 * @d: d
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}
	free(d);
}
