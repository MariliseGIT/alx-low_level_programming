#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _abs - entry point
 * Description: Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
