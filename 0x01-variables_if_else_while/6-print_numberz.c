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
	int i = 0;

	while (i < 10);
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n')
		return(0)
}
