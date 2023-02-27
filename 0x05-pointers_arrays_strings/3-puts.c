#include <stdio.h>
#include "main.h"
/**
 * _puts - Print a string follwed by a new line, to stdout.
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
