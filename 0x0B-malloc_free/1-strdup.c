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
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
