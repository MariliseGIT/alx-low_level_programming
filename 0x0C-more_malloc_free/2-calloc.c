#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - Allocate memory for an array using malloc.
 * @nmemb: array
 * @size: number of bytes
 * Return: pointer to allocated memory,
 * NULL if nmemb or size = 0 or fail.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fil;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	fil = mem;

	for (i = 0; i < (size * nmemb); i++)
		fil[i] = '\0';

	return (mem);
}
