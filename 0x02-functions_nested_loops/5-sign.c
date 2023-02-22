#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_sign - Check Main
 * @n: The input number is an integer.
 * Description: Check if the input number is greater, equal or less than zero.
 *
 * Return: 1 if the number is greater than zero,
 * 0 if the number is zero,
 * -1 if the number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
