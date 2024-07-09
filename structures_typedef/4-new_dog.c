#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int largoname, largoowner, i;
	dog_t *newdog;

	for (largoname = 0; name[largoname] != '\0'; largoname++)
	{}
	for (largoowner = 0; name[largoowner] != '\0'; largoowner++)
	{}

	newdog = (dog_t *)malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = NULL;
	newdog->owner = NULL;

	newdog->name =(char *)malloc((largoname + 1) * sizeof(char));
	newdog->name =(char *)malloc((largoowner + 1) * sizeof(char));

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		if (newdog->name != NULL)
		{
			free(newdog->name);
		}
		if (newdog->owner != NULL)
		{
			free(newdog->owner);
		}
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < largoname; i++)
	{
		newdog->name[i] = name[i];
	}

	for (i = 0; i < largoowner; i++)
	{
		newdog->owner[i] = owner[i];
	}

	newdog->age = age;

	return (newdog);

}
