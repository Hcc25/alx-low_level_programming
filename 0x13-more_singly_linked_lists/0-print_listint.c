#include "lists.h"
/**
 * print_listint - prints characters of a linked list
 * @h: linked list of the type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		printf("%i\n", h->n);
		if (h->next)
			count += print_listint(h->next);
		return (count + 1);
	}
	else
		return (count);
}
