#include "hash_tables.h"
/**
 * hash_table_create - creates hash table to specified size
 * @size: size of the table
 * Return: returns hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		new_table->array[count] = NULL;
	new_table->size = size;
	return (new_table);
}
