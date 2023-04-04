#include "lists.h"
/**
 * listint_len - checks the length of the
 * elements in a list
 * @h: a pointer
 * Return:the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t dig = 0;

	while (h != NULL)
	{
		h = h->next;
		dig++;
	}
	return (dig);
}
