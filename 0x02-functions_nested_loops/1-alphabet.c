#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Print the alphabet in lowercase followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char low;
	
	for (low = 'a'; low <= 'z' ; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
