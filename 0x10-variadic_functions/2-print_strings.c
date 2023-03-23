#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_strings - Print strings followed by a new line, if
 * separator is NULL don't print, if strings is NULL print (nil).
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 * @...: variable number of strings to bbe printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
