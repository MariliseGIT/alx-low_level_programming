#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - Prints anything.
 * @format: list of type of arguments passed to the function,
 * c: char, i: integer, f: float, s: char *.
 */
void print_all(const char * const format, ...)
{
	va_list ab;
	char *tem;

	int i = 0;

	va_start(ab, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ab, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ab, double));
				break;
			case 's':
				tem = va_arg(ab, char*);
				if (tem != NULL)
				{
					printf("%s", tem);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ab);
	printf("\n");
}
