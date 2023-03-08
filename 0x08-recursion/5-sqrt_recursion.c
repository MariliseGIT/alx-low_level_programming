#include <stdio.h>
#include "main.h"
/**
 * find_sqrt - Find the natural square root of input number.
 * @num: the number to find the square root of
 * @root: the root to be tested
 * Return: square root if the number has a natural square root,
 * -1 if the number does not have a natural square root.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - Return the natural square root of a number.
 * @n: number to return the square root of
 * Return: natural root,  -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}
