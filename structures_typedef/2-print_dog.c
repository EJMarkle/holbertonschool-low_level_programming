#include "dog.h"
#include "main.h"
/**
 * print_dog - prints the dog struct
 * @d: pointer to dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)";
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner != ? d->owner : "(nil)";
	}
}
