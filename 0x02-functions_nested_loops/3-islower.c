#include <stdio.h>
#include "main.h"
/*
 * _islower - tests whether a given character is a lowercase letter.
 *
 * @c: the character to be checked.
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
