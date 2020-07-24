#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_list - function
* description: print
* @h: lists
* Return: size
*/

size_t print_list(const list_t *h)
{
unsigned int i;


 while(h != NULL)
   {
     if (str == NULL)
       {
       printf("[0] (nil)/n");
       }
     else
       {
	 printf("[%d] %s\n", h->len, h->str);
       }
	 h = h->next;
	 i++;
          
   }
return (i);
}
