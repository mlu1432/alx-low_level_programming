#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Chooses the correct function for the operation
 * 		 asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: Pointer to the function corresponding
 *         to the parameterized operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
