#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
* print_all - function
* description: print
* @format: desc
* Return: void
*/

void print_all(const char * const format, ...)
{
va_list argpnt;
int i = 0;
char f;
char *s;
va_start(argpnt, format);

while (format != NULL && format[i] != '\0')
{
f = format[i];
switch (f)
{
case 'c':
printf("%c", va_arg(argpnt, int));
break;
case 'i':
printf("%d", va_arg(argpnt, int));
break;
case 'f':
printf("%f", va_arg(argpnt, double));
break;
case 's':
s = va_arg(argpnt, char *);
if (s == NULL)
{
s = "(nil)";
}
printf("%s", s);
break;
default:
break;
}
if (format[i + 1] != '\0' && (f == 'c' || f == 'f' || f == 'i' || f == 's'))
printf(", ");
i++;
}
printf("\n");
va_end(argpnt);
return;
}
