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
  int ff;
  int ft;
  int chars;
  int abschar;

  if (ac != 3)
    {
      dprintf(STDOUT_FILENO, "Usage: cp file_from file_to/n");
      return (97);
    }

  ff = open(av[1], O_RDONLY);

  ft = open(av[2], O_APPEND | O_CREAT | O_RDWR);

  while ((chars = read(ff, buffer, 1024)) > 0)
    {
      if (chars == -1)
	printf("trial");
      abschar = write(ft, buffer, chars);
      if (abschar == -1)
	printf("trial");
    }

  /**
   *      dprintf(STDOUT_FILENO, "Error: Can't read from file %s", ac[1]);
   *      return(0);
   */

  close(ff);
  close(ft);
  return (0);
}
