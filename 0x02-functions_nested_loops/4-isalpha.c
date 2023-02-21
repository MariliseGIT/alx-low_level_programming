#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if a charcter is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is letter, lowercase or uppercase, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
