#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * print_dog - Print a struct dog.
 * @d: the struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0 )
		printf("Age: (nil)\n");
	else
		printf("Age: %0.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}
