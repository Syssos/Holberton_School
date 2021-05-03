#include "hash_tables.h"
/**
 * key_index - returns key index
 * @key: the key
 * @size: size of table
 * Return: returns key index
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
