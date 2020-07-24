#include "holberton.h"


/**
* print_diagonal - prints char
* description: prints char n spaces from start
* @n: int
* Return: 0
*/

void print_diagonal(int n)
{
int i;


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
