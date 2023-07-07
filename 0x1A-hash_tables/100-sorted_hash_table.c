#include "hash_tables.h"

/**
 * sorted_list - inserts a new node in sorted hash table
 * @ht: pointer to the sorted hash table
 * @new_node: new node to be inserted
 * Return: Nothing.
 */

void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *bucket = ht->shead;

	if (bucket == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, bucket->key) < 0)
		{
			new_node->snext = bucket;
			new_node->sprev = bucket->sprev;

			if (!bucket->sprev)
				ht->shead = new_node;
			else
				bucket->sprev->snext = new_node;
			bucket->sprev = new_node;
			return;
		}
		bucket = bucket->snext;
	} while (bucket);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table to be created
 * Return: pointer to hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size == 0)
		return (NULL);

	table = calloc(1, sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: key to which the element will be added
 * @value: value to add the element
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *value_copy, *key_copy;
	shash_node_t  *bucket, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);
	value_copy = strdup(value);
	if (!value_copy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = value_copy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	key_copy = strdup(key);
	if (!key_copy)
		return (0);
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sorted_list(ht, new_node);
	return (1);
}
/**
 * shash_table_get - retrieves the value associeted with key
 * @ht: pointer to the hash table
 * @key: key to retrive the value
 * Return: value or NULL if key does not exit.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the key:value from hash table
 * @ht: pointer to hash table
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int find = 0;

	if (!ht)
		return;
	bucket = ht->shead;
	printf("{");
	while (bucket)
	{
		if (find)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		find = 1;
		bucket = bucket->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the key:value from ht in reverse
 * @ht: pointer to the hash table
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int find = 0;

	if (!ht)
		return;
	bucket = ht->stail;
	printf("{");
	while (bucket)
	{
		if (find)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		find = 1;
		bucket = bucket->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - frees hash table and all nodes
 * @ht: pointer to the hash table
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *bucket, *aux;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			aux = bucket;
			bucket = bucket->next;
			if (aux->key)
				free(aux->key);
			if (aux->value)
				free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
