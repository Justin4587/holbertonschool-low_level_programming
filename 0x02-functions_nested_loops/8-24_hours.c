#include "holberton.h"

/**
* jack_bauer - prints clock digits
* description: each digit from 0:00 to 24:00
* Return: last digit
*/

void jack_bauer(void)
{
int hr, h, min, m;

hr = 0;
h = 0;
min = 0;
m = 0;

for (hr = '0'; hr <= '2'; hr++)
{
for (h = '0'; h <= '9'; h++)
{
if (hr == '2' && h == '4')
{
break;
}
for (min = '0'; min <= '5'; min++)
{
for (m = '0'; m <= '9'; m++)
{
_putchar(hr);
_putchar(h);
_putchar(':');
_putchar(min);
_putchar(m);
_putchar('\n');
}
}
}
}
}
