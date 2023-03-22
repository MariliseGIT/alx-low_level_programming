#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - Select correct function to perform operation asked by user.
 * @s: operater passed as argument to program.
 * Return: pointer to function that corresponds to operator given as parameter,
 * for example get_op_function returns pointer to op_add.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (i < 5)
	{
		if (*(ops[i]).op == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
