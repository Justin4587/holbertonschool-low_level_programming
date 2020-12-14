#include "holberton.h"

/**
* _abs - absoloute
* description: abs value of a number
* @n: int
* Return: int
*/

int _abs(int n)
{
if (n < 0)
n = n * -1;
return (n);
}
