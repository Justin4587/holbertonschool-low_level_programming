#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* read_textfile - function
* description: print
* @filename: lists
* @letters: IDK
* Return: size
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
  char *txt;
  int f;
  int c;
  int num;

  f = open(filename, O_RDONLY);

  if (filename == NULL)
    {
      return(0);
    }

  txt = malloc(sizeof(char) * letters);

  if (txt == NULL)
    {
      return(0);
    }

  num = read(f, txt, letters);
  c = write(STDOUT_FILENO, txt, num);
  close(f);
  free(txt);
  return (c);
}


