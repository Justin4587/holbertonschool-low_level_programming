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
dlistint_t *node, *temp, *after_node;

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
    after_node = temp->next;
    temp->next = node;
    node->prev = temp;
    node->next = after_node;

    if (after_node)
    after_node->prev = node;
    
    
    

return (node);
}