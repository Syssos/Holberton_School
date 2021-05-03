#include "hash_tables.h"
/**
 * hash_table_set - adds value to table
 * @ht: linked list holding array and size
 * @key: key for table
 * @value: value for table
 * Return: returns 1 if successful 0 for failure
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (key == NULL || ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
		index += 1;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index]->next = new_node;
	}
	return (1);
}
