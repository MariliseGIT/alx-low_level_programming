#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - Concatenate all the arguments of the program.
 * @ac: number of arguments passed to program
 * @av: array of pointers to the arguments
 * Return: NULL if ac == 0 or av == NULL or fail, a pointer
 * to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
