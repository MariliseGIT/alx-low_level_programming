#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - Print the numbers form 1-100, but for multiples of three,
 * Fizz is printed instead of the number, for muliples of five,
 * Buzz, and for multiples of both three and five, FizzBUzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
