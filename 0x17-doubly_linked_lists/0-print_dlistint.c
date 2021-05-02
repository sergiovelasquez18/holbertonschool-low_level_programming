#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: pointer to a struct of type dlistint_t
 * Return: number of letters it could read and print
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
