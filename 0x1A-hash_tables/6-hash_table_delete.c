#include "hash_tables.h"
#include "string.h"
/**
 * hash_table_delete - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 *
 *
 * Return: 1 or 0
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temptemp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		temptemp = ht->array[i];
		while (temptemp)
		{
			temp = temptemp->next;
			free(temptemp->key);
			free(temptemp->value);
			free(temptemp);
			free(temp);
			temptemp = temp;
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
