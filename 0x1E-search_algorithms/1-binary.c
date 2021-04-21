#include "search_algos.h"
/**
* binary_search - take a Fu$%*ng guess
* @array: pointer to First
* @size: size of array
* @value: the one I want
* Return: # or -1
*/


int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	else if (size)
		return (meat_and_potatoes(array, 0, size - 1, value));
	return (-1);
}


#include "search_algos.h"
/**
* meat_and_potatoes - take a Fu$%*ng guess
* @array: pointer to First
* @stuck: kind of like a pointer/idx
* @size: size of array
* @value: the one I want
* Return: # or -1
*/


int meat_and_potatoes(int *array, size_t stuck, size_t size, int value)
{
	size_t mid = (stuck + (size - stuck) / 2);

	if (array == NULL)
		return (-1);

	make_the_checker_happy(array, stuck, size);

	if (size >= stuck)
	{

		if (array[mid] == value)
			return (mid);
		else if (mid < 1 || mid >= size)
			return (-1);
		else if (array[mid] < value)
			return (meat_and_potatoes(array, mid + 1, size, value));
		else if (array[mid] > value)
			return (meat_and_potatoes(array, stuck, mid - 1, value));
	}
	return (-1);
}

#include "search_algos.h"
/**
* make_the_checker_happy - take a Fu$%*ng guess
* @array: pointer to First
* @start: size of array
* @end: the one I want
* Return: # or -1
*/


void make_the_checker_happy(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i < end; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[i]);
}
