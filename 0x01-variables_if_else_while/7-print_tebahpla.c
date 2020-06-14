#include <stdio.h>

/**
* main - putchar z to a
* description: all lowercase letters in reverse
* Return: Everything returns to nothing or 0
*/

int main(void)
{
	char z;

	z = 'z';
	while (z >= 'a')
	{
	putchar(z);
	z = z - 1;
	}
	putchar('\n');
	return (0);
}
