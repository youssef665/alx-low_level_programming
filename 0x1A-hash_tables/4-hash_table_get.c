#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve the value
 * @ht: pointer
 * @key: key
 *
 * Return: value or NULL if failed
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int in = 0;
	hash_node_t  *b;

	if (!ht || !key || !*key)
		return (NULL);

	in = key_index((const unsigned char *)key, ht->size);
	b = ht->array[in];

	while (b)
	{
		if (!strcmp(key, b->key))
			return (b->value);
		b = b->next;
	}

	return (NULL);
}

