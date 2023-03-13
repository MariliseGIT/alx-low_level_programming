#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - Return a pointer to a 2 dimentional array of integers.
 * @width: width of 2 dimentional arrat
 * @height: height of 2 dimentional array
 * Return: NULL if width <= 0, height <= 0 or failure. Otherwise
 * a pointer to 2 dimentional array.
 */
int **alloc_grid(int width, int height)
{
	int **TooD;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	TooD = malloc(sizeof(int *) * height);
	if (TooD == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		TooD[hgt_index] = malloc(sizeof(int) * width);

		if (TooD[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(TooD[hgt_index]);

			free(TooD);
			return (NULL);
		}
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			TooD[hgt_index][wid_index] = 0;
	}
	return (TooD);
}
