#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash the table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *bucket;
	int find = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			if (find)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			find = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
