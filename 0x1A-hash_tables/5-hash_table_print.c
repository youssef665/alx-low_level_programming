#include "hash_tables.h"

/**
 * hash_table_print - function to print the key
 * @ht: pointer
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t  *b;
	int nf = 0;

	if (!ht)
		return;

	printf("{");

	for (j = 0; j < ht->size; j++)
	{
		b = ht->array[j];

		while (b)
		{
			if (nf)
				printf(", ");
			printf("'%s': '%s'", b->key, b->value);
			nf = 1;
			b = b->next;
		}
	}

	printf("}\n");
}
