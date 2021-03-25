#include "lists.h"

/**
 * pop_listint - freee a listint_t list
 * @head: pointer a pointer to struct
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *headref;

	if (*head == NULL)
		return (0);
	headref = (*head)->next;
	tmp = (*head)->n;
	free(*head);
	*head = headref;
	return (tmp);
