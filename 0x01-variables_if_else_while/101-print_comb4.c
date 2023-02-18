#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible different combonations of three digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, k, k, l;
	
	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundereds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (j < k && k > 1)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}