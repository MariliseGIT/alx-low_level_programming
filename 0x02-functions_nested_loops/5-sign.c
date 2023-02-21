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
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar (45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
	function removeNewLines(str)
	{
		return str.replace(/(\r\n|\n|\r)/gm, '');
	}
}
