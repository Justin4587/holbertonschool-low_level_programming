#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* flip_bits - function
* description: print
* @m: position
* @n: lists
* Return: size
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int total = 0;  


  while (n || m)
    {
      unsigned long int bit_a = n & 1;
      unsigned long int bit_b = m & 1;
      if (bit_a != bit_b)
	{
	total++;
	}
      n = n >> 1;
      m = m >> 1;
    }
  return (total);
}
