#include <stdio.h>
#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Check if a number is divisible.
 * @num: the number to be checked
 * @div: the diviser
 * Return: -0 if number is divisible.
 * -1 if number is not divisible.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}
	return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - Check if a number is a prime.
 * @n: the number to be checked
 * Return: 0 if the integer is not a prime,
 * -1 if the number is a prime.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
