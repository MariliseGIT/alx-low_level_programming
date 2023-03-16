#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * array_range - Create an array of integers orded from min to max, inclusive.
 * @min: first value of array
 * @max: laste value of array
 * Return: pointer to newly created array,
 * NULL if min > max or fail.
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
