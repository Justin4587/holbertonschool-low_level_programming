#include "holberton.h"


/**
* _isdigit - checks for num
* description: checks for num
* @c: int
* Return: 1 or 0
*/

int _isdigit(int c)
{
if (c > 57 && c < 48)
return (0);
if (c <= 57 && c >= 48)
return (1);
else
return (0);
}
