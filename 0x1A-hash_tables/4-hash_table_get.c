#include "hash_tables.h"
#include "string.h"
/**
 * hash_table_get - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 * @key: um size
 *
 * Return: 1 or 0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;
	const unsigned char *key_copy = (const unsigned char *)key;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index(key_copy, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}
