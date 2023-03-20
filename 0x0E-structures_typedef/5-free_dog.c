#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - A function that frees dogs.
 * @d: dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
