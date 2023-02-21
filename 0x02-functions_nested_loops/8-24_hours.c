#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * jack_bauer - Check Main
 * Description: Print every minute of one day.
 * 
 * Return: Nothing
 */
void jack_bauer(void)
{
	int H, M;

	for (H =0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			putchar((H / 10) + '0');
			putchar((H % 10) + '0');
			putchar(':');
			putchar((M / 10) + '0');
			putchar((M % 10) + '0');
			putchar('\n');
		}
	}
}
