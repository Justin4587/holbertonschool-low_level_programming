#include <stdio.h>



int main(void)
{
  char c;
  c = 'a';
  {
	while (c <= 'z')
	{
	  putchar(c);
	}
	c = c + 1;
  }
return (0);
}
