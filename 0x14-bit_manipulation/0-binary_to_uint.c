#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* binary_to_uint - function
* description: print
* @b: lists
* Return: size
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int count = 0;


if (b == NULL)
return (0);

while (b[count] == '0' || b[count] == '1')
{
num <<= 1;
num += b[count] - '0';
count++;
}
if ((b[count] != '0' || b[count] != '1') && b[count] != '\0')
{
return (0);
}
return (num);
}
