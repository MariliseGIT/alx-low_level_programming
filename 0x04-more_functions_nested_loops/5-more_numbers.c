#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * more_numbers - check mian
 * Description: Print the numbers 0-14, ten times.
 */
void more_numbers(void)
{
	int num, count;

	for ( count = 0; count <= 9; count++)
	{
		for (num =0; num <= 14; num ++)
		{
			if (num > 9)
				_putchar((num /10) + '0);
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
