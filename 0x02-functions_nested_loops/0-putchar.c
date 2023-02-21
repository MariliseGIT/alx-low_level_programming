#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Print _putchar followed by a new line with a return of 0
 *
 * Return: 0 (success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(char word[i]);
	}
	putchar('\n');
	return (0);
}
