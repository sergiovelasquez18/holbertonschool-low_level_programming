#include "hash_tables.h"
/**
 * _strlen - returns the value of a string
 * @s: contains the value of the variable
 * Return: Always 0 (Succes)
 */
int _strlen(char *s)
{
	int devl = 0;

	while (s[devl] != '\0')
		devl++;
	return (devl);
}

/**
 * add_node - adds a new node to the list
 * @head: pointer to a list
 * @key: key to insert
 * @value: associated value to insert
 *
 * Return: pointer to the new node
 */
hash_node_t *add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = head;

	head = new;
	return (head);
}

/**
 * hash_table_set - adds a node to the beginning of a linked list
 * @ht: pointer to a hash table
 * @key: componet of the new element
 * @value: other componet the new element
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx;
	hash_node_t *key_node;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	key_node = search_key(key, ht);
	if (key_node != NULL)
	{
		free(key_node->value);
		key_node->value = strdup((char *)value);
		return (1);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	new = ht->array[idx];
	new = add_node(ht->array[idx], key, value);
	if (new == NULL)
		return (0);
	ht->array[idx] = new;

	return (1);
}
/**
 * search_key - adds a node to the beginning of a linked list
 * @key: key of array in hash-table
 * @ht: header
 *
 * Return: pointer to the new node
 */
hash_node_t *search_key(const char *key, hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (strcmp(key, tmp->key) == 0)
				{
					return (tmp);
				}
				tmp = tmp->next;
			}
		}
		i++;
	}
	return (NULL);
}
