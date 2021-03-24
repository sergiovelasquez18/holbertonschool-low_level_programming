#include "lists.h"

/**
 * print_listint - a fuction that prints numbers
 * @h: a variable tha pointd to a pointer which points
 *
 * Return: number the elements
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
