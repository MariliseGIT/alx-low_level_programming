#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - Return a pointer to a newly allocated space in memory,
 * which contains a copy of string given as parameter.
 * @str: string
 * Return: NULL if equal to str, NULL if insufficient memory,
 * pointer to duplicate string if success.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
