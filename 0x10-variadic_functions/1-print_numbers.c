#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function
* description: print
* @n: int
* @separator: thing
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list argpnt;
unsigned int i;
int j;
va_start(argpnt, n);

if (n == 0)
{
return;
}

else
for (i = 0; i < n ; i++)
{
j = va_arg(argpnt, int);
printf("%d", j);
if (i < n - 1)
printf("%s", separator);
}
putchar('\n');
va_end(argpnt);
return;
}
