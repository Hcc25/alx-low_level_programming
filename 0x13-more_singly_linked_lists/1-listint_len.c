#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
