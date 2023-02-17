#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that print lowercase alphabet except q and e
 *
 *Return:0 (success0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
