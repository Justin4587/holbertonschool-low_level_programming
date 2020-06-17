#include "holberton.h"

/**
* print_sign - + - or 0
* description: determines positive or negative
* @n: int
* Return: 0 1 or -1
*/

int print_sign(int n)
{
	int n;

if (n > 0)
{
_putchar("+");
return (1);
}
if (n == 0)
{
_putchar("0");
return (0);
}
if (n < 0)
{
_putchar("-");
return (-1);
}
}
