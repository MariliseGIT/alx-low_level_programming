#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - Reallocate a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: byte size of allocated space for ptr
 * @new_size: new byte size of new memory block
 * Return: ptr if new_size == old_size,
 * NULL if new_size == 0 and ptr not NULL,
 * otherwise a pointer to reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *fil;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fil = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		fil[i] = *ptr_copy++;

	free(ptr);
	return (mem);
}
