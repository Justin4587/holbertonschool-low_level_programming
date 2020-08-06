#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* append_text_to_file - function
* description: print
* @filename: lists
* @text_content: IDK
* Return: size
*/

int append_text_to_file(const char *filename, char *text_content)
{
int f;
int c;
int num = 0;

f = open(filename, O_APPEND | O_RDWR);

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


