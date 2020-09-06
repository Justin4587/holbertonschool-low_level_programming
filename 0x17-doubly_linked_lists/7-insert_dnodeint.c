#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* *insert_dnodeint_at_index - function
* description: print
* @h: lists
* @idx: position
* @n: int
* Return: size
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *node, *temp;

node = malloc(sizeof(dlistint_t));

node->n = n;
temp = *h;

if (node == NULL)
return (NULL);
for (i = 0; i < idx - 1; i++)
{
temp = temp->next;
if (temp == NULL && i + 1 < idx)
return (NULL);
}
node->next = temp->next;
temp->next = node;

return (node);
}