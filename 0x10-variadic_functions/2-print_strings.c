#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
* print_strings - function
* description: print
* @n: int
* @separator: thing
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list argpnt;
unsigned int i;
char *s;

va_start(argpnt, n);

if (n == 0 || separator[0] == '\0')
{
return;
}

else
for (i = 0; i < n ; i++)
{
s = va_arg(argpnt, char *);
if (s[0] == '\0')
{
printf("(nil)");
}
printf("%s", s);
if (i < n - 1)
printf("%s", separator);
}
putchar('\n');
va_end(argpnt);
return;
}
