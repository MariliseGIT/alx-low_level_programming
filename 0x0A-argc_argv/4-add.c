#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Program that adds positive numbers and prints result.
 * @argc: number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: -1 if one of the numbers contain symbols that are non-digit,
 * 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int x = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for ( i = 1; i < argc; i++)
	{
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
