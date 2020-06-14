#include <stdio.h>

/**
* main - hexadecimal reference program
* description: all hexadecimal char
* Return: there can only be one and that one is a 0
*/

int main(void)
{
	char a;
	char b;

	a = 'a';
	b = '0';

	while (b <= '9')
	{
	putchar(b);
	b = b + 1;
	}
	while (a <= 'f')
	{
	putchar(a);
	a = a + 1;
	}
	putchar('\n');
	return (0);
}
