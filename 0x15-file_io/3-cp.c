#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* main - function
* description: print
* @ac: lists
* @av: IDK
* Return: size
*/

int main(int ac, char **av)
{
char buffer[1024];
int ff, ft, chars, abschar;

if (ac != 3)
{
dprintf(STDOUT_FILENO, "Usage: cp file_from file_to/n");
return (97);
}
ff = open(av[1], O_RDONLY);
ft = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (ft == -1)
{
close(ff);
close(ft);
dprintf(2, "Error: Can't read from file %s", av[1]);
return (98);
}
while ((chars = read(ff, buffer, 1024)) > 0)
{
abschar = write(ff, buffer, chars);
if (abschar == -1)
{
close(ff);
close(ft);
dprintf(2, "Error: Can't write to %s", av[2]);
return (99);
}}
chars = close(ff);
if (chars == -1)
{
dprintf(2, "Error: Can't close fd %s", av[1]);
return (100);
}
abschar = close(ft);
if (abschar == -1)
{
dprintf(2, "Error: Can't close fd %s", av[2]);
return (100);
}
return (0);
}
