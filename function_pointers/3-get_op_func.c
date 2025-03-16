#include "3-calc.h"
#include <string.h> /* For strcmp */

/**
* get_op_func - Selects the function to perform the operation
* @s: The operator passed as a string
* Return: A function pointer to the corresponding operation, or NULL if invalid
*/
int (*get_op_func(char *s))(int, int)
{
/* Defining an array of structs with operators and corresponding functions */
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

/* Checking if the operator matches one of the ones in ops[] */
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}

/* Return NULL if no match is found */
return (NULL);
}
