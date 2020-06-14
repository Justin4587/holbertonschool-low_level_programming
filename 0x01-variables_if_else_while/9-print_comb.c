#include <stdio.h>

/**
* main - 0 through 9
* description: all numbers 0 - 9 seperated by a coma and space
* Return: well it cant be a one so 0 it is
*/

int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
