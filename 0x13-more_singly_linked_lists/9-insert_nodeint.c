#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* insert_nodeint_at_index - function
* description: print
* @head: lists
* @idx: position
* @n: int
* Return: size
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
{
unsigned int i;
listint_t *node, *temp;

node = malloc(sizeof(listint_t));

node->n = n;
temp = *head;

if (node == NULL)
return (NULL);
for (i = 0; i < idx - 1; i++)
{
temp = temp->next;
if (temp == NULL && i + 1 < idx)
return (NULL);
}
node->next = temp->next
temp->next = node;

return (node);
}
