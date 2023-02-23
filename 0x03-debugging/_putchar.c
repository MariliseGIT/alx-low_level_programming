#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _putchar - wites the character c to stdout
 * @c: The character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
int _putchar(char c)
{
	return (fwrite(1, &c, 1));
}
