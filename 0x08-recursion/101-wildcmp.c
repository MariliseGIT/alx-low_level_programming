#include <stdio.h>
#include "main.h"
#include <string.h>

int strlen_no_wilds(char *str);
void interate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - Return the length of string, ignoring wildcard characters.
 * @str: string to be measured.
 * Return: the length
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}
	return (len);
}
/**
 * iterate_wild - Iterate through a string located at a wildcard,
 * untill it points to a non-wildcard character.
 * @wildstr: string to be iterated through.
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}
/**
 * postfix_match - Check if a string str matches the postfix
 * of another string potentially containing wildcards.
 * @str: string to be matched.
 * @postfix: the postfix
 * Return: A pointer to NULL byte located at end of postfix if str and postfix
 * identical. Otherwise, a pointer to the first unmatched
 * chararcter in postfix.
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
	{
		iterate_wild(&postfix);
	}

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
	postfix++;
	return (postfix_match(str, postfix));
	}
	return (postfix);
}
/**
 * wildcmp - Compare two strings, considering wildcard characters.
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: -1 if strigs are considered identical,
 * 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
	{
		return (1);
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(++s1, ++s2));
}
