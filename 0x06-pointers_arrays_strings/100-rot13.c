#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rot13 - A function that encodes a string.
 * @s: string
 * Return: the pointer address of s.
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwyxzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

		for (i = 0; *(s + i); i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (a[j] == *(s + i))
				{
					*(s + i) = b[j];
					break;
				}
			}
		}
	return (s);
}
