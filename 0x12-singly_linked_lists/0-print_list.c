#include "lists.h"

/**
 * print_list - a fuction that prints numbers
 * @h: variable pointing to struct of type list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		counter++;
		h = h->next;
	}
	return (counter);
}
