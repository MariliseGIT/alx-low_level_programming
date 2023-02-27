#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Copies the string pointed to by @src, including the
 * termininating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: The pointer to @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
