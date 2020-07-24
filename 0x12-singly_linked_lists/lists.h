#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


size_t print_list(const list_t *h);


typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


#endif /* LISTS_H */
