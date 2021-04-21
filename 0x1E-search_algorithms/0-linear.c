#include "search_algos.h"
/**
* linear_search - take a Fu$%*ng guess
* @array: pointer to First
* @size: size of array
* @value: the one I want
* Return: # or -1
*/


int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
