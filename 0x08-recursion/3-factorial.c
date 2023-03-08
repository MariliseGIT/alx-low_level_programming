#include <stdio.h>
#include "main.h"
/**
 * factorial - Return the factorial of a given number.
 * @n: int
 * Return: factorial int of a given number.
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
