#include "holberton.h"

/**
* _pow_recursion - I HAVE THE POWER
* description: power of
* @x: int
* @y: int
* Return: a value
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
