#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - check main
 * @c: The character to be checked.
 * Description: function that checks for an uppercase character.
 *
 * Return: 1 if chacter is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
		return (1);
	else
		return (0);
}
