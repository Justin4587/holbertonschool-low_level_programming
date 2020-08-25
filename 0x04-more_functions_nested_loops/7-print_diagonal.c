#include "holberton.h"


/**
* print_diagonal - prints char
* description: prints char n spaces from start
* @n: int
* Return: 0
*/

void print_diagonal(int n)
{
int i, j;

for (i = n; i > 0; i--)
{
for (j = n - i; j > 0; j--)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}


if (n <= 0)
{
_putchar('\n');
}
}
