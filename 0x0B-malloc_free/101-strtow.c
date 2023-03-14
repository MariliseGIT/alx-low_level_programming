#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int wordcounter(char *str, int pos, char fchar);
char **strtow(char *str);
/**
 * wordcounter - Count the words and letters in string.
 * @str: string
 * @pos: position of word to count characters form
 * @fchar: position of first letter
 * Definition: If pos = 0, count the numbers of chars in words,
 * else count the number of words.
 * Return: wordcount if pos == 0, lenght of word if pos > 0,
 * position of pord if pos > 0 && fchar > 0.
 */
int wordcounter(char *str, int pos, char fchar)
{
	int i, wordcount, charcount, flag;

	str[0] != ' ' ? (wordcount = 1) : (wordcount = 0);
	for (i = 0, flag = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' &&
				flag == 0)
		{
			wordcount++;
			flag = 1;
		}
		if (pos > 0 && pos == wordcount)
		{
			if (pos > 0 && pos == wordcount && fchar > 0)
				return (i);
			for (charcount = 0; str[i + charcount + 1] != ' '; charcount++)
				;
			return (charcount);
		}
		if (str[i] == ' ')
			flag = 0;
	}
	return (wordcount);
}
/**
 * strtow - Convert string into array of words.
 * @str: string
 * Return: double pointer to array.
 */
char **strtow(char *str)
{
	int wc, wordlen, getfchar, len, i, j;
	char **p;

	for (len = 0; str[len]; len++)
		;
	if (str == NULL)
		return (NULL);
	wc = wordcounter(str, 0, 0);
	if (len == 0 || wc == 0)
		return (NULL);
	p = malloc((wc + 1) * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0, wordlen = 0; i < wc; i++)
	{
		wordlen = wordcounter(str, i + 1, 0);
		if (i == 0 && str[i] != ' ')
			wordlen++;
		p[i] = malloc(wordlen * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		getfchar = wordcounter(str, i + 1, 1);
		if (str[0] != ' ' && i > 0)
			getfchar++;
		else if (str[0] == ' ')
			getfchar++;
		for (j = 0; j < wordlen; j++)
			p[i][j] = str[getfchar + j];
		p[i][j] = '\0';
	}
	free(p);
	p[i] = NULL;
	return (p);
}
