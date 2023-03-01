#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates two strings.
 * @dest: char dest.
 * @src: char src.
 * @n: interger length.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
