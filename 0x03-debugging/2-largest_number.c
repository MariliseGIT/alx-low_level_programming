#include "main.h"
#include <stdio.h>
/**
 * largets_number - it is to returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * REturn: largest number
 */
int largest_number(int a, int b, int c);
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest =c
	}
	return (largest);
}