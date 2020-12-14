#include "lists.h"

/**
 * sum_dlistint - traverses linked list
 * description: retrieve node
 * @head: head of list
 * Return: none
 */

int sum_dlistint(dlistint_t *head)
{
unsigned int sum = 0;


if (head == NULL)
return (0);

while (head)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
