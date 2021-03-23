#include "lists.h"

/**
 * list_len - returns the number of elements in linked list_t list
 * @h: variable pointing to struct of type list_t
 *
 * Return: the number of elememts in liked list
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
