#include "holberton.h"
/**
 * _strncpy - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes to cat
 * free(dest);
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
if (dest[i] != '\0')
dest[i] = '\0';

	return (dest);
}
/**
 * _strlen - gets length of a string
 * @str: input string
 * Return: length of string
 */
int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}
