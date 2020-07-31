#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* set_bit - function
* description: print
* @index: position
* @n: lists
* Return: size
*/

int set_bit(unsigned long int *n, unsigned int index)
{
  int status;  

  if (index > 63)
    {
      return (-1);
    }

  status = 1 << index;
  *n = *n | status;


  return (1);
}
 
