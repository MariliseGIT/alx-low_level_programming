#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - Create an array of chars and initialize with a specific char.
 * @size: size of the array
 * @c: a character to initialized the array
 * Return: NULL if size = 0, pointer to the array, or NULL if fails.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
