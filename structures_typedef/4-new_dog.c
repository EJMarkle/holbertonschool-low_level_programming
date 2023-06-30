#include "dog.h"
#include "main.h"
/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: NULL if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* this allocates mem for dog struct */
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	/* this allocates mem and copies the name */
	newDog->name = malloc(strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);

	/* this allocates mem and copies the owner */
	newDog->owner = malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->owner, owner);

	newDog->age = age;
	return (newDog);
}
