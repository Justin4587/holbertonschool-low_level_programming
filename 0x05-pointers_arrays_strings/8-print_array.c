#include "holberton.h"

/**
* print_array - entry point
* @a: chars
* @n: int
* Return: void
*/

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
i++;
if (i < n)
{
printf(", ");
}
}
printf("\n");
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
