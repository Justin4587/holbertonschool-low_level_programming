#include "holberton.h"


/**
* print_numbers - displays num
* description: displays num 0 - 9
* Return: 0
*/

void print_numbers(void)
{
int cnt;
cnt = 0;

while (cnt <= 9)
{
_putchar(cnt);
cnt++;
}

_putchar('\n');

return;
}
