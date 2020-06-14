#include <stdio.h>

/**
* main - 0 through 9
* description: all numbers 0 - 9 seperated by a coma and space
* Return: well it cant be a one so 0 it is
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
	if (n != 9)
{
		putchar(',');
		putchar(' ');
}
	else
{
	    putchar('\n');
}
n = n + 1;
}
return (0);
}
