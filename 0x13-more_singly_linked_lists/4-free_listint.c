#include "lists.h"

/**
 * free_listint - freee a listint_t list
 * @head: a varible pointing to struct of type listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
