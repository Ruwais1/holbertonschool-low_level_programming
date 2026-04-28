#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: Hash table
 * @key: Key to add or update
 * @value: Value associated with key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new;
	char *v_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	for (new = ht->array[i]; new != NULL; new = new->next)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = v_copy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(v_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		free(v_copy);
		return (0);
	}
	new->value = v_copy;
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
