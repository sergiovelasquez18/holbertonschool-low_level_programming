#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list_t list
 * @head: a variable pointing to a variable pointing to struct
 * @n: value of n member of new node
 * Return: the addres of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
