#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* *get_nodeint_at_index - function
* description: print
* @head: lists
* @index: position
* Return: size
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int counter = 0; 

while (counter < index)
{
head = head->next;
counter++;
}
return (head);
}
