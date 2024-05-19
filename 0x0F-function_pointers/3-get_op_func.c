#include "3-calc.h"
/**
 * get_op_func - function to determine which operation
 * to carry out considering the operation ie.argv[2]
 * @s: string conataining the operator ie.argv[2]
 *
 * Return: return pointer to the operating function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && ops[i].op[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
