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

size_t print_list(const list_t *h)
{
unsigned int i = 0;


while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
i++;
}
return (i);
}
