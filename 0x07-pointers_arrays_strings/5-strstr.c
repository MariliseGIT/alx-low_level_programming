#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strstr - Locate a substring.
 * @haystack: string
 * @needle: substring
 * Return: A pointer to the beginning of substring, NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);

				x++;

			} while (haystack[x] == needle[x]);
		}

		haystack++;
	}

	return ('\0');
}
