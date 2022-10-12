#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: operator used
 *
 * Return: correct funvtion result or NULL if operator is wrong
 */

int (*get_op_func(char *s))(int, int)
{
	op_t_ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_amod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == opp[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
