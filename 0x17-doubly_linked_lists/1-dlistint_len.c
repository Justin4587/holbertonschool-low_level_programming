#include "lists.h"

/**
 * dlistint_len - traverses linked list
 * description: prints ints in list
 * @h: list
 * Return: size of list
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
