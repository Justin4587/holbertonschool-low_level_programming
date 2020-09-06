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
dlistint_t *node, *node_before, *node_after;

node = malloc(sizeof(dlistint_t));

node->n = n;
node_before = *h;

if (node == NULL)
return (NULL);
for (i = 0; i < idx - 1; i++)
{
node_before = node_before->next;
if (node_before == NULL)
return (NULL);
}
node_after = node_before->next;
node_before->next = node;
node->prev = node_before;
node->next = node_after;

if (node_after)
node_after->prev = node;


return (node);
}
