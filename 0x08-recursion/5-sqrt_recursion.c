#include "holberton.h"

/**
* _sqrt_recursion - find sqr
* description: i + i
* @n: int
* Return: value
*/

int _sqrt_recursion(int n)
{
int i = 0;
return (find_sqrt(n, i));
}

/**
* find_sqrt - find sqr
* @i: int
* @n: int
* Return: value
*/

int find_sqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
else
{
return (find_sqrt(n, i + 1));
}
}
