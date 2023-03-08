#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Return the value of x raised to the power of y.
 * @x: int
 * @y: int
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	result *= _pow_recursion(x, y - 1);

	return (result);
}
