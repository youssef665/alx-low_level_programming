#include "hash_tables.h"

/**
 * sorted_list - function for insert new node
 * @ht: pointer
 * @new_node: new node
 *
 */

void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *sb = ht->shead;

	if (sb == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, sbucket->key) < 0)
		{
			new_node->snext = sb;
			new_node->sprev = sb->sprev;

			if (!sb->sprev)
				ht->shead = new_node;
			else
				sb->sprev->snext = new_node;
			sb->sprev = new_node;
			return;
		}

		sb = sb->snext;
	} while (sb);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;

}

/**
 * shash_table_create - creates a sorted ht
 * @size: size
 *
 * Return: pointer
 *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *t;

	if (size == 0)
		return (NULL);

	t = calloc(1, sizeof(shash_table_t));
	if (t == NULL)
		return (NULL);

	t->size = size;
	t->array = calloc(size, sizeof(shash_node_t *));

	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}

	return (t);
}

/**
 * shash_table_set - function that adds an element
 * @ht: pointer
 * @key: key
 * @value: value
 *
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int in = 0;
	char vc, *kc;
	shash_node_t  *b, *newn;

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

	newn = calloc(1, sizeof(shash_node_t));
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
	sorted_list(ht, newn);

	return (1);
}
/**
 * shash_table_get - function to retrieve value
 * @ht: pointer
 * @key: key
 *
 * Return: value or NULL if failed
 *
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int in = 0;
	shash_node_t  *b;

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

/**
 * shash_table_print - function to print the key
 * @ht: pointer
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *b;
	int nf = 0;

	if (!ht)
		return;
	b = ht->shead;
	printf("{");
	while (b)
	{
		if (nf)
			printf(", ");
		printf("'%s': '%s'", b->key, b->value);
		nf = 1;
		b = b->snext;
	}

	printf("}\n");
}
/**
 * shash_table_print_rev - function to print the key reverse
 * @ht: pointer
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *b;
	int nf = 0;

	if (!ht)
		return;
	b = ht->stail;
	printf("{");
	while (b)
	{
		if (nf)
			printf(", ");
		printf("'%s': '%s'", b->key, b->value);
		nf = 1;
		b = b->sprev;
	}

	printf("}\n");
}
/**
 * shash_table_delete - free hash table
 * @ht: pointr
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *b, *af;
	unsigned long int j = 0;

	if (!ht)
		return;

	for (j = 0; j < ht->size; j++)
	{
		bucket = ht->array[j];
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
