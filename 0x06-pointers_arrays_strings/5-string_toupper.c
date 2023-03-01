#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * string_toupper - Changes all lowercase letter of a string to uppercase.
 * @s: char *s
 * Return: A pointer to the changed string s.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
