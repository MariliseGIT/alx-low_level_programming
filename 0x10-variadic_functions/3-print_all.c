#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Print a char.
 * @arg: list of arguments pointing to char to print.
 */
void print_char(va_list arg)
{
	char lttr;

	lttr = va_arg(arg, int);
	printf("%c", lttr);
}
/**
 * print_int - Print an integer.
 * @arg: list of arguments pointing to integer to print.
 */
void print_int(va_list arg)
{
	int numbr;

	numbr = va_arg(arg, int);
	printf("%d", numbr);
}
/**
 * print_float - Print a float.
 * @arg: list of arguments pointing to float to print.
 */
void print_float(va_list arg)
{
	float numbr;

	numbr = va_arg(arg, double);
	printf("%f", numbr);
}
/**
 * print_string - Print a string.
 * @arg: list of arguments pointing to string to be printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - Prints anything.
 * @format: list of types of arguments passed to function.
 * @...: variable number of arguments to be printed.
 * Description: Print only type char, int, flat, or char *, ignore rest,
 * if string argument is NULL, print (nil) instead.
 */
void print_all(const char * const format, ...)
{
	va_list argus;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(argus, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(argus);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(argus);
}
