#include "holberton.h"

/**
* _strstr - write value to buffer
* description: take a value and write to buffer n times
* @s: location being appended
* @accept:char to look for
* Return: char str
*/

char *_strstr(char *haystack, char *needle)
{
    int i = 0, j = 0, k;

    k = _strlen(needle);

    while (haystack[i] != '\0')
    {
        if (haystack[i] == needle[j])
        {
            while (haystack[i] == needle[j])
            {
                if (j == k - 1)
                {
                    k = i - j;
                    return ((char *) haystack + k);
                }
            j++;
            i++;
            }
        }
        i++;
    }
    return(0);
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



