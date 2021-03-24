#include "lists.h"

/**
 * listint_len - a fuction that prints numbers
 * @h: variable that points to listint_t struct
 *
 * Return: the number elements
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

/**
 * *get_nodeint_at_index - freee a listint_t list
 * @head: a variable pointing to a struct
 * @index: index of node, starting from 0
 * Return: a variable pointing to struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	size_t length;

	length = listint_len(head);
	if (index > length)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
