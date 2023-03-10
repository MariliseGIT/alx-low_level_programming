#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncpy - A function that copies a string.
 * @dest: char
 * @src: char
 * @n: an integer
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
