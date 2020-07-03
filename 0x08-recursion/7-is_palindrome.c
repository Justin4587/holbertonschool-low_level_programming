#include "holberton.h"

/**
* is_palindrome - finds pals
* description: checks things front to back ha
* @s: pointer
* Return: value
*/

int is_palindrome(char *s)
{
int start, end;

end = _strlen_recursion(s) - 1;
start = 0;
return (find_palindrome(s, start, end));
}


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

/**
* find_palindrome - check for pal
* description: create a function to place chars
* @s: pointer
* @start: beg variable
* @end: end variable
* Return: a value
*/

int find_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (*(s + start) != *(s + end))
return (0);
else
return (find_palindrome(s, start + 1, end - 1));
}
