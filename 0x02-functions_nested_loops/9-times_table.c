#include "holberton.h"

/**
* times_table -mul 0 - 9
* description: displays times table
* @sum: passed number
* @fac: first digit
* @fact: second digit
* Return: 0
*/

void times_table(void)
{
  int sum;
  int fac;
  int fact;
  sum = 0;
  fact = 0;
  fac = 0;

  for (fact = 0; fact <= 9; fact++)
    {    
      for (fac = 0; fac <= 9; fac++)
	{
	sum = fact * fac;
	printf("%d, ", sum);
		{
	  if (fact > 9 && fac > 9)
	    {
	      break;
	    }
	}
    }
}
  return;
}
