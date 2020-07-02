#include "holberton.h"

/**
* _puts_recursion - print Betty Holberton
* description: create a function to place chars
* @s: pointer
*/

void _puts_recursion(char *s)
{
if (*s != 0)
{
_puts_recursion(s + 1);
_putchar(*s);
}
else
{
return;
}
}
