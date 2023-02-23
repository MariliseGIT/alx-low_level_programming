#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_line - check main
 * @n: The number of _ characters to be printed.
 * Description: A function that draws a straight line using the character _ .
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
