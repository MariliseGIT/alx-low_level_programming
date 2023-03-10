#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check main
 * @c: The number to be checked.
 * Description: function that checks for a digit (0-(=9).
 *
 * Return: 1 if number is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
