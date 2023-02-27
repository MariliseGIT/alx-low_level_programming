#include <stdio.h>
#include "main.h"
/**
 * puts2 - Print every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer char
 * Return: void
 */
void puts2(char *str)
{
	int i, x;

	i = 0;
	x = 0;
	while (str[i++])
	{
		x++;
	}
	for (i = 0; i < x; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
