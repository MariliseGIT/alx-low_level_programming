#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to standout
 * @c: The character to print
 *
 * Resturn: on success 1.
 * On error, -1 is returned, an errno is set appropriaty.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
