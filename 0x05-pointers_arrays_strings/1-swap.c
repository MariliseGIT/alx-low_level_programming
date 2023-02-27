#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * swap_int - Swap the value of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
