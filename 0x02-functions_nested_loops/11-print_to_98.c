#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_70_98 - Check Main
 * @n: An input integer
 * Description: Function that prints all natuaral numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if ( n == 98)
				continue;
			printf(", ");
		}
	}else
			printf("\n");
	}
	(else
	{
		for (; n >= 98; n--)
		{
			printf("d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	})
}
