#include <stdio.h>
#include "main.h"
/**
 * _strchr - Locate a character in a string.
 * @s: string
 * @c: char
 * Return: A pointer to the first occurence of c in s,
 * NULL if no chacter is found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
