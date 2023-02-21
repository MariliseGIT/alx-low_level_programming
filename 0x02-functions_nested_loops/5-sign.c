#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - Entry point
 *
 * print_sign: Prints the sign of a number.
 * @n: The number of which the sign will be printed.
 *
 * Return: 1 if the number is greater than zero,
 * 0 if the number is zer,
 * -1 if the number is less than zero.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0);
	putchar(',');
	putchar(r + '0');
	putchar('\n');
	r= print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
