#include "holberton.h"


/**
* print_line - prints line
* description: prints char n times
* @n: int
* Return: 0
*/

void print_line(int n)
{

if (n <= 0)
{
_putchar('\n');
return;
}

while (n != 0)
{
_putchar('_');
n--;
}
_putchar('\n');
return;
}
