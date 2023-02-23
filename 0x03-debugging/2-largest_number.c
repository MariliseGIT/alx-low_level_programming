#include "main.h"
#include <stdio.h>
/**
 * largets_number -check main
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Description: Print out the largest of three numbers, no matter the case.
 * Return: largest number
 */
int largest_number(int a, int b, int c)
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
		largest = c;
	}
	return (largest);
}
