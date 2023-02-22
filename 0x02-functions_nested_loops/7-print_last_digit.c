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
int print_last_digit(int n)
{
	int k;

	if (n < 0)
		k = -1 * (n % 10);
	else
		k = n % 10;
	_putchar((k % 10) + '0');
	_putchar('\n');
	return (k % 10);
}
