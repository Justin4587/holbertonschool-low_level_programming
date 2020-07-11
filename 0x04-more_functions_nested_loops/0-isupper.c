#include "holberton.h"


/**
* _isupper - checks case
* description: checks for uppercase alpha
* @c: int
* Return: 1 or 0
*/

int _isupper(int c)
{
if (c > 90 && c < 65)
return (0);
if (c <= 90 && c >= 65)
return (1);
else
return (0);
}
