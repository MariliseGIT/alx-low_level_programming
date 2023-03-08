#include <stdio.h>
#include "main.h"
#include <string.h>

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Return the length of a string.
 * @s: string
 * Return: the length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
/**
 * check_palindrome - Check if a string is a palindorme.
 * @s: string
 * @len: the length of s
 * @index: the index of s to be checked.
 * Return: -1 if the string is a palindorme,
 * 0 if the string is not a palindrome.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}
	if (s[index] == s[len - index - 1])
	{
		return (check_palindrome(s, len, index + 1));
	}
	return (0);
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string
 * Return: -1 if string is a palindorme,
 * 0 if the string is not a palindrome.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
	{
		return (1);
	}
	return (check_palindrome(s, len, index));
}
