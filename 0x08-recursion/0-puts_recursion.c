#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _puts_recursion - Print a string followed by a new line.
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
		_putchar('\n');
}
