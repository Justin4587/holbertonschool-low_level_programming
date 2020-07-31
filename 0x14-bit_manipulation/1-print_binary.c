#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_binary - function
* description: print
* @n: lists
* Return: size
*/

void print_binary(unsigned long int n)
{

if (n == 0)
{
_putchar('0');
return;
}
else if (n == 1) 
{
_putchar('1');
return;
}

print_binary(n >> 1);
_putchar('0' + (n & 1));
}
