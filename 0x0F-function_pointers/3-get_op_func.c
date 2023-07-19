#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the operator passed as an argument to the program
 *
 * Return: a pointer to the function that corresponds to the operator,
 * or NULL if the operator is not recognized
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*ops[i].op == *s && !(*(s + 1)))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
