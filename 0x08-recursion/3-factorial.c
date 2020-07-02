#include "holberton.h"

/**
* factorial - factorial
* description: create a function to place chars
* @n: int
* Return: a value
*/

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
