#include "lists.h"
#include "string.h"
/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: pointer to apointera to a struct
 * @str: string to be copied
 * Return: the addres of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);		

