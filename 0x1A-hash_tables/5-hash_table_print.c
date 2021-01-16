#include "hash_tables.h"
#include "string.h"
/**
 * hash_table_print - implementation of the djb2 algorithm
 * @ht: string used to generate hash value
 *
 *
 * Return: 1 or 0
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	


	printf("{");
	temp = ht->array[i];
	printf("do we get here");

	while (i < ht->size)
	{
		printf("%s : %s", temp->key, temp->value);
		if (i < ht->size - 1)
			printf(", ");
		temp = temp->next;
		i = i + 1;
	}
	printf("}\n");
}
