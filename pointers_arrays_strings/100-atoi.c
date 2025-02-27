#include "main.h"
#include <limits.h>


/**
* _atoi - Converts a string to an integer.
* @s: The input string.
* Return: The integer value of the string, or 0 if no numbers found.
*/

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int found_number = 0;

while (*s)
{
if (*s == '-')
{
if (!found_number)
sign *= -1;
}
else if (*s == '+')
{
if (found_number)
break;
}
else if (*s >= '0' && *s <= '9')
{
if (result > (INT_MAX - (*s - '0')) / 10)
return (sign == 1 ? INT_MAX : INT_MIN);
result = result * 10 + (*s - '0');
found_number = 1;
}
else if (found_number)
break;

s++;
}
return (found_number ? result *sign : 0);
}
