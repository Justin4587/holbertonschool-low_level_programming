#include "lists.h"

/**
 * print_dlistint - traverses linked list
 * description: prints ints in list
 * @h: list
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
unsigned int i = 0;

if (h == NULL)
return (i);

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
