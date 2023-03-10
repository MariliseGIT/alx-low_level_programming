#include <stdio.h>
#include "main.h"
/**
 * main - Print all arguments received, including the first one.
 * @argc: int
 * @argv: string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
