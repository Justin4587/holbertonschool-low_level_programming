#include "holberton.h"

/**
* puts2 - entry point
* @str: chars
* Return: void
*/

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
i++;
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

while (str[i] != '\0')
i++;
return (i);
}
