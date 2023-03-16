#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenate two strings.
 * @s1: first string
 * @s2: second string
 * @n: maximum number if bytes of s2 to concatenate to s1
 * Return: pointer to newly allocated memory, NULL if fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';

	return (concat);
}
