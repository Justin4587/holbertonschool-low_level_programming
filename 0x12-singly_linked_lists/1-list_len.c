#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_list - function
* description: print
* @h: lists
* Return: size
*/

size_t list_len(const list_t *h)
{
unsigned int i;


while(h != NULL)
{
h = h->next;
i++;
}
return (i);
}
