#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Print all possible combinations of single-digit numbers.
 * Print numbers in ascending order and separate by , and a space
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
	}
	if (x < 57);
	{
		putchar(44);
		putchar(32);
	}
	x++;
	putchar('\n');
	return (0);
}
