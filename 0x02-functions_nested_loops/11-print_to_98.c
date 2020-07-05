#include "holberton.h"

/**
* print_to_98 - gets to 98
* description - adds or subtracts until the value reaches 98
* @n: int
* Return: sum
*/

void print_to_98(int n)
{
while (n < 98)
{
n++;
printf("%d, ", n);
}
while (n > 98)
{
n--;
printf("%d, ", n);
}
if (n == 98)
return;
}
