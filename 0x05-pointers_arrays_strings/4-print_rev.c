#include "holberton.h"

/**
* _puts - entry point
* @str: chars
* Return: void
*/

void print_rev(char *str)
{
int i, j;

j = _strlen(str);
i = j - 1;

while (i != 0)
{
    _putchar(str[i]);
    i--;
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
