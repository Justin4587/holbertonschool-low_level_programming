#include "lists.h"

/**
 * *get_dnodeint_at_index - traverses linked list
 * description: retrieve node
 * @index: node to retrieve
 * @head: head of list
 * Return: none
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int cnt = 0;
dlistint_t *node;

if (head == NULL)
return (head);

node = head;

while (index)
{
if (cnt == index)
return (node);
cnt++;
node = node->next;
}
return (NULL);
}
