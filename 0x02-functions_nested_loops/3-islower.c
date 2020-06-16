#include "holberton.h"

/**
* _islower - islower detects lower case chars
* description: prints a value determined by lowercase char
* @c: int
* Return: 0
*/

int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
