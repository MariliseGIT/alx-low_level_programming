#include <stdio.h>
#include "main.h"
/**
 * print_rev - Print a string in reverse followed by a new line.
 * @s: pointer char.
 * Return: void
 */
void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	n = i - 1;
	for (i = n; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
