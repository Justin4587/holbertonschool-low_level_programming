#include "holberton.h"

/**
* print_rev - entry point
* @s: chars
* Return: void
*/

void print_rev(char *s)
{
int i, j;

j = _strlen(s);
i = j;

while (i != '\0')
{
i--;
_putchar(s[i]);
}
_putchar('\n');
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
