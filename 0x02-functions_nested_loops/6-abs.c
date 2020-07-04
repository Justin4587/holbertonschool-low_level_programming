#include "holberton.h"

/**
* _abs - absoloute
* description: abs value of a number
* @n: int
* Return: int
*/

int _abs(int n)
{
int const mask = n >> (sizeof(int) * CHAR_BIT - 1);
return ((n + mask) ^ mask);
}
