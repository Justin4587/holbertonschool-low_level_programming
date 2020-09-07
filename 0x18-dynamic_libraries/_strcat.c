#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * free(dest);
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	i = _strlen(dest);

	for (j = 0; src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}

