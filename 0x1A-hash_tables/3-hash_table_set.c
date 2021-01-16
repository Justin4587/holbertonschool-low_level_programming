#include "hash_tables.h"
#include "string.h"
/**
 * hash_table_set - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 * @key: um size
 * @value: num
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *head;
	unsigned long int i;
	const unsigned char *key_copy = (const unsigned char *)key;


	if (ht == NULL || strlen(key) == 0 )
		return (0);

	i = key_index(key_copy, ht->size);
	head = ht->array[i];

	while(head)
	{
		if (strcmp(head->key, key) == 0)
		{
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return(0);
	}

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new);
		return(0);
	}

	new->next = ht->array[i];
	ht->array[i]= new;
	return (1);

}
