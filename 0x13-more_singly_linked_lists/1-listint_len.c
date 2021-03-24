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
