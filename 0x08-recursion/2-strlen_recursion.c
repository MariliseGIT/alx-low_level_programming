#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - A function that return the length of a string.
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
