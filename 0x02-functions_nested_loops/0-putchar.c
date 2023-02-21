#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Print the word "_putchar", followed by a new line with return 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
int _putchar(char c)
{
	return (write(1, &c,1));
}
