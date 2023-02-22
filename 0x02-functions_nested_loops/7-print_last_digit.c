#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - entry point
 *@n:the number in question
 * Description: Print the last digit of a number.
 * 
 * Return: Value of the last digit.
 */
int print_last_digit(int r)
{
	int k;

	if (r < 0)
		k = -1 * (r % 10);
	else
		k = r % 10;
	_putchar((k % 10) + '0');
	return (k % 10);
}
