#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_number - A function that prints an integer.
 * @n: an integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
