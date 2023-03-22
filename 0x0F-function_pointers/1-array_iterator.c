#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Execute a function given as a parameter,
 * on each element of an array.
 * @array: the array.
 * @size: size of the array.
 * @action: pointer to the function the be used.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
