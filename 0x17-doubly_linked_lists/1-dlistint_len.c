#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* dlistint_len - function
* description: print
* @h: lists
* Return: size
*/

size_t dlistint_len(const dlistint_t *h)
{
unsigned int i = 0;

if (h == NULL)
return (i);

while (h != NULL)
{
h = h->next;
i++;
}

return (i);
}
