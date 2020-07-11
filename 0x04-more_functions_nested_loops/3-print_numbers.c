#include "holberton.h"


/**
* print_numbers - displays num
* description: displays num 0 - 9
* Return: 0
*/

void print_numbers(void)
{
char a;
a = '0';

while (a <= '9')
{
_putchar(a);
a++;
}

_putchar('\n');

return;
}
