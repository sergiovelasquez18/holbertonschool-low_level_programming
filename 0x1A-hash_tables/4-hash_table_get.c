#include "hash_tables.h"
/**
 * hash_table_get - returns the value of a string
 * @ht: contains the value of the variable
 * @key: key
 * Return: Always 0 (Succes)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int hash = 0;

	if (!key || !*key || !ht)
		return (NULL);
	hash = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[hash];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, (char *)key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
