#include "holberton.h"


/**
* more_numbers - displays num
* description: displays num 0 - 14
* Return: 0
*/

void more_numbers(void)
{
char a;
char b;
int i;
i = 0;


while (i != 10)
{
for (a = '0'; a <= '1'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (a == '1' && b == '5')
{
break;
}
if (a == '1')
{
_putchar(a);
}
_putchar(b);
}
}
i++;
_putchar('\n');
}
return;
}
