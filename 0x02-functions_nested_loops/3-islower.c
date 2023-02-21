#include <stdio.h>
#include "main.h"
/*
 * _islower - tests whether a given character is a lowercase letter.
 *
 * @param c: the character to be tested.
 *
 *Return 1 if character is lowercase, otherwise 0.
 */
int _islower(int c) // _islower is the function and c is the character tested
{
	/*_islower tests if the given character is a lowercase letter */
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
