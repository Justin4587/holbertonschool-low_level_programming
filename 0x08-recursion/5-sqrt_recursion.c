#include "holberton.h"

/**
* _sqrt_recursion - find sqr
* find_sqrt - return sqrt
* description: i + i
* @n: int
* Return: value
*/

int _sqrt_recursion(int n)
{
int i = 0;
return (find_sqrt(n, i));
}

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
