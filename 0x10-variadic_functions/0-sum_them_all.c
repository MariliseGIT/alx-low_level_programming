#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Return the sum of all its parameters.
 * @n: number of parameters passed to the function
 * @...: variable number pf parameters to calculate sum of.
 * Return: 0 if n == 0,
 * otherwise sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int i, sum = 0;

	va_start(numb, n);

	for (i = 0; i < n; i++)
		sum += var_arg(numb, int);

	va_end(numb);

	return (sum);
}
