#include "holberton.h"

/**
* print_alphabet - prints lower case
* description: prints all lower case letters
* Return: 0
*/


void print_alphabet(void)
{

	char c;

	c = 'a';

while (c <= 'z')
{
_putchar(c);
}
if (c == 'z')
{
_putchar('\n');
}
c = c + 1;
}
