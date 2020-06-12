#include <stdio.h>

/**
* main - a through z except q e
* description: all letters lower case excluding q and e
* Return: 0
*/

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
		putchar(c);
		}
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
