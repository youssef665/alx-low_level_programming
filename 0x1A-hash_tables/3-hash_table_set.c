#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element
 * @ht: pointer
 * @key: key to add element
 * @value: value of element
 *
 * Return: 1 if success, 0 if fialed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int in = 0;
	char *vc, *kc;
	hash_node_t  *b, *newn;

	if (!ht || !key || !*key || !value)
		return (0);

	vc = strdup(value);
	if (!vc)
		return (0);

	in = key_index((const unsigned char *)key, ht->size);
	b = ht->array[in];

	while (b)
	{
		if (!strcmp(key, b->key))
		{
			free(b->value);
			b->value = vc;
			return (1);
		}
		b = b->next;
	}
	newn = calloc(1, sizeof(hash_node_t));
	if (newn == NULL)
	{
		free(vc);
		return (0);
	}

	kc = strdup(key);
	if (!kc)
		return (0);

	newn->key = kc;

	newn->value = vc;
	newn->next = ht->array[in];
	ht->array[in] = newn;
	return (1);

}

