#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - entry point
 * Description: Find and print the largest prime facter of the number
 * 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	int div;
	long prime = 612852475143;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
				prime /= div;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
