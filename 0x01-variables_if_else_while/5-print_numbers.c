#include <stdio.h>
#include <unistd.h>

/**
* main - 0 through 9
* description: simple numerical output
* Return: you know its 0 betty damn
*/

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	  {
	    {
	      putchar('0' + n);
	    }
	    if (n == 9)
	      {
		putchar('\n');
	      }
	    n = n + 1;
	  }
	return (0);
}
