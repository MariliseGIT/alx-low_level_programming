#include <stdio.h>
#include "main.h"
/**
 * main - Print the number of arguments passed into it.
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: 0 always.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
