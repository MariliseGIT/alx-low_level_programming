#include <stdio.h>

/**
 * main- Print the name of the file it was compiled with,
 * followed by a new line.
 * Return: 0 Always
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
