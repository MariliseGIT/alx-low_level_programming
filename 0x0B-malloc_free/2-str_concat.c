#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - Concatenate two strings.
 * @s1: string to concatenated upon
 * @s2: string to concatenated to s1
 * Return: NULL on failure, pointer to newly allocated space in
 * memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_index++] = s2[i];

	return (concat_str);
}
