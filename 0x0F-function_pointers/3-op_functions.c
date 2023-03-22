#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Return the sum of a and b.
 * @a: input integer.
 * @b: input integer.
 * Return: The result of sum a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Return the substract of a and b.
 * @a: input integer.
 * @b: input integer.
 * Return: Result of substract of a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return the mulitply of a and b.
 * @a: integer.
 * @b: integer.
 * Return: result of mulitpy a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return divide of a and b.
 * @a: input integer.
 * @b: input integer.
 * Return: Result to divide a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Return the module of a and b.
 * @a: input integer.
 * @b: input integer.
 * Return: Result of module a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
