#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - A function that reverses the content of an array.
 * @a: an array
 * @n: number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
