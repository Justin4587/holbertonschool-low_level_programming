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
unsigned int i = 0;
int j;
va_start(argpnt, n);

if (separator == NULL)
{
return;
}

while (i < n)
{
j = va_arg(argpnt, int);
printf("%d", j);
if (i < n - 1)
printf("%s", separator);
i++;
}
putchar('\n');
va_end(argpnt);
return;
}
