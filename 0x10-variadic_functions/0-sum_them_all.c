#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* variadic_functions - function
* description: add
* @n: int
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list argpnt;
unsigned int i;
int sum = 0;
 
va_start (argpnt, n);

if (n == 0)
{
return (0);
}

else
for (i = 0; i < n; i++)
{
sum += va_arg (argpnt, int);
}
va_end (argpnt);
return (sum);
}
