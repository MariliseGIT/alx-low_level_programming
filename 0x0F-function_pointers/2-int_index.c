#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Search for an integer.
 * @array: an array.
 * @size: number of elements in the array array.
 * @cmp: pointer to the function to be used to compare values.
 * Return: Index of first element for which cmp does nto return 0,
 * -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
