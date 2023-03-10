#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strspn - Get the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: number of bytes in s which consist of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	int i;

	x = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (x);
			}
		}
		s++;
	}
	return (x);
}
