#include "holberton.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* main - standard putchar
* @c: char
* description: print char
* Return: 0
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
