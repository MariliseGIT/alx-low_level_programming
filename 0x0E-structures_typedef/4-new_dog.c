#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Find the length of a string.
 * @str: string to be measured.
 * Return: Length of string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * _strcopy - Copy a string pointed to by src, including terminating null byte,
 * to a buffer pointed to by dest.
 * @dest: buffer stroring string copy.
 * @src: sourc string
 * Return: pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\n';

	return (dest);
}

/**
 * new_dog - Create a new dog.
 * @name: the name of the odg.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 * Return: NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
