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
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
