#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Print all single digit numbers of base 10, starting from 0.
 * The variable of type char is not allowed and use putchar only twice.
 *
 * Return: 0 (success)
 */
int main (void)
{
	int d;
	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return(0);
}
