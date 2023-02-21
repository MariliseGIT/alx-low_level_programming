#include <stdio.h>
#include "main.h"
/*
 * _islower - Entry point
 * Description: _islower tests whether a given character is a lowercase letter.
 *
 * @param c: the character to be tested.
 *
 *Return 1 if character is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
