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
	hash_node_t *temp, *temp_end;
	unsigned long int j, i = 0;

	if (ht == NULL)
		return;

	j = (ht->size) - 1;
	while (j != 0)
	{
		temp_end = ht->array[j];
		if (temp_end)
			break;
		j = j - 1;
	}

	printf("{");

	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("%s : %s", temp->key, temp->value);
			if (temp != temp_end)
				printf(", ");
			temp = temp->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
