#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: dog to be initialized.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
