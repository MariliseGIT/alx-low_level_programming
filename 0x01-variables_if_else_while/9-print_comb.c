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
	int i;

	for (i = 48 ; i <= 58; i++)
	{
		putchar(i);
	}
	if (i < 57)
	{
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
