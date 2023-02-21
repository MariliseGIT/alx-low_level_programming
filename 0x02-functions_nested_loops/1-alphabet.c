#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Print the alphabet in lowercase followed by a new line.
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
