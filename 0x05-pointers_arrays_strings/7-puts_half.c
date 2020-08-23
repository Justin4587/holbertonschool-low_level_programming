#include "holberton.h"

/**
* puts_half - entry point
* @str: chars
* Return: void
*/

void puts_half(char *str)
{
int i = 0;

i = _strlen(str);

if (i % 2 == 0)
i = i / 2;
else
i = (i + 1) / 2;

while (str[i] != '\0')
{
_putchar(str[i]);
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
