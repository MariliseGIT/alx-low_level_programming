#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints whether a given number is positive or negative
 * Return: 0 (success)
 */

int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;

	printf("%d \n", x);

	/* Assign a random number to the variable n each time it is executed */
	if (x > 0)
	{
		printf("%d is a Positive \n", x);
	}
	else if (x < 0)
	{
		printf("%d is a Negative \n", x);
	}
	else
	{
		printf("%d is Zero \n", x);
}
	return (0);
}
