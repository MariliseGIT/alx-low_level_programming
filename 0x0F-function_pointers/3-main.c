#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 * main - Program to perform simple operations.
 * @argc: argument count.
 * @argv: array of arguments.
 * Return: 0 Always.
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
