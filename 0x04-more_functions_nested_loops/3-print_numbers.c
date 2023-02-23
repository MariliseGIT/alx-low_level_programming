#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_numbers - check main
 * Description: print the numbers from 0-9, followed by a new line.
 *
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
	return (0);
}
