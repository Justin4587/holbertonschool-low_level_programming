#include "holberton.h"

/**
* print_last_digit - last digit of a number
* description: prints last digit
* @r: passed number
* Return: last digit
*/

int print_last_digit(int r)
{
r = % 10;
if (r < 0)
r = r * -1;
_putchar('0' + r);
return (r);
}
