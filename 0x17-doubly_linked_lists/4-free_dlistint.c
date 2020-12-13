#include "lists.h"

/**
 * free_dlistint - traverses linked list
 * description: prints ints in list
 * @head: head of list
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
free(head);
head = head->next;
}
return;
}
