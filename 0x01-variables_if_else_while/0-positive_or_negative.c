#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints whether a given number is positive or negative
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Assign a random number to the variable n each time it is executed */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
}
	return (0);
}
