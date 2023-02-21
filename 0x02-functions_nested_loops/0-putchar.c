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
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');

	return (0);
}
int _putchar(char c)
{
	return (fwrite(1, &c,1));
}
