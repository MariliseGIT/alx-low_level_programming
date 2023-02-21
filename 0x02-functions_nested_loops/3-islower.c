#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"
/*
 * _islower - entry point
 * Description: tests whether a given character is a lowercase letter.
 *
 * @param c: the character to be tested.
 *
 *Return 1 if character is lowercase, otherwise 0.
 */
int _islower(int c)
{
	/*_islower tests if the given character is a lowercase letter */
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
