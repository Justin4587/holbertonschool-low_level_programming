#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* listint_len - function
* description: print
* @h: lists
* Return: size
*/

size_t listint_len(const listint_t *h)
{
unsigned int i = 0;


while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
