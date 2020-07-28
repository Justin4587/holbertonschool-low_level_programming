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

size_t print_listint(const listint_t *h)
{
unsigned int i = 0;


while (h != NULL)
{
if (h->n == '\0')
{

}
else
{
printf("%d\n", h->n);
}
h = h->next;
i++;
}
return (i);
}
