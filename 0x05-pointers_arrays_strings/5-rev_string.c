#include "holberton.h"

/**
* rev_string - entry point
* @s: chars
* Return: void
*/

void rev_string(char *s)
{
int i = 0, k;
char temp;

k = _strlen(s);
k = k - 1;

while (i < k / 2)
{
temp = s[i];
s[i] = s[k];
s[k] = temp;
k--;
i++;
}
return;
}

/**
 * _strlen - gets length of a string
 * @str: input string
 * Return: length of string
 */
int _strlen(char *str)
{
unsigned int i = 0;

while (str[i])
i++;
return (i);
}
