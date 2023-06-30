#include "main.h"
#include "dog.h"
/**
 * free_dog - frees dog structure memory
 * @d: pointer to dog_t
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
