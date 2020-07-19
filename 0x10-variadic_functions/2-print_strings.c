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
unsigned int i = 0;
char *s;

va_start(argpnt, n);



while (i < n)
{
s = va_arg(argpnt, char *);
if (s == NULL)
{
printf("(nil)");
}
printf("%s", s);
if (i < n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(argpnt);
return;
}
