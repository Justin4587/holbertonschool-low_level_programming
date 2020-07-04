#include "holberton.h"

/**
* print_last_digit - last digit of a number
* description: prints last digit
* @r: passed number
* Return: last digit
*/

int print_last_digit(int r)
{
int s;
s = r % 10;
if (s < 0)
s = s * -1;
_putchar('0' + s);
return (s);
}
