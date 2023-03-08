#include <stdio.h>
#include "main.h"
/**
 * check - Check for the square root.
 * @a: int
 * @b: int
 * Return: int as the square root
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a = 1, b));
}

/**
 * _sqrt_recursion - Return the natural square root of a number.
 * @n: int
 * Return: natural root,  -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
