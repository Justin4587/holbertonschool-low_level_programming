#include "hash_tables.h"

/**
 * hash_table_create - create hashbrowns
 * @size: size of hashbrowns
 * Return: pnt
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashb;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);

	hashb = malloc(sizeof(hash_table_t));

	if (hashb == NULL)
		return (NULL);

	hashb->size = size;

	hashb->array = malloc(sizeof(hash_node_t *) * size);

	if (hashb->array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		hashb->array[i] = NULL;
		i = i + 1;
	}

	return (hashb);
}
