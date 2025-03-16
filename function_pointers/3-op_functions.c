#include "3-calc.h"

/**
* op_add - Adds two numbers
* @a: The first number
* @b: The second number
* Return: The sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Subtracts two numbers
* @a: The first number
* @b: The second number
* Return: The difference between a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Multiplies two numbers
* @a: The first number
* @b: The second number
* Return: The product of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Divides two numbers
* @a: The first number
* @b: The second number
* Return: The result of a divided by b
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
* op_mod - Calculates the modulo of two numbers
* @a: The first number
* @b: The second number
* Return: The remainder of the division of a by b
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
