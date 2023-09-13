#include "hash_tables.h"

/**
 * hash_table_delete - free hash table
 * @ht: pointer
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *b, *af;
	unsigned long int j = 0;

	if (!ht)
		return;

	for (j = 0; j < ht->size; j++)
	{
		b = ht->array[j];
		while (b)
		{
			af = b;
			b = b->next;
			if (af->key)
				free(af->key);
			if (af->value)
				free(af->value);
			free(af);
		}

	}

	free(ht->array);
	free(ht);
}
