#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int meat_and_potatoes(int *array,size_t stuck, size_t size, int value);
void make_the_checker_happy(int *array, size_t start, size_t end);

#endif /* SEARCH_ALGOS_H */
