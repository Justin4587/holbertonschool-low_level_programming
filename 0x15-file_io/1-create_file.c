#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* create_file - function
* description: print
* @filename: lists
* @letters: IDK
* Return: size
*/

int create_file(const char *filename, char *text_content)
{
int f;
int c;
int num = 0;

f = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

if (filename == NULL || f == -1)
{
close(f);
return (-1);
}

while (text_content[num])
{
num++;
}

if (text_content == NULL)
{
close(f);
return (1);
}

c = write(f, text_content, num);
close(f);
if (c == -1)
{
return (-1);
}
return (1);
}


