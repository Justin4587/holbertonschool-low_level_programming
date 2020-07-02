#include "holberton.h"

/**
* _strlen_recursion - count string
* description: create a function to place chars
* @s: pointer
* Return: a value
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
