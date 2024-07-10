#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - nuevo dog
 * @name: nombre
 * @age: edad
 * @owner: dueÃo
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int largoname, largoowner, i;
	dog_t *newdog;

	for (largoname = 0; name[largoname] != '\0'; largoname++)
	{}
	for (largoowner = 0; owner[largoowner] != '\0'; largoowner++)
	{}

	newdog = (dog_t *)malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = (char *)malloc((largoname + 1) * sizeof(char));
	newdog->owner = (char *)malloc((largoowner + 1) * sizeof(char));

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < largoname; i++)
	{
		newdog->name[i] = name[i];
	}
	newdog->name[largoname] = '\0';

	for (i = 0; i < largoowner; i++)
	{
		newdog->owner[i] = owner[i];
	}
	newdog->owner[largoowner] = '\0';
	newdog->age = age;
	return (newdog);
}
