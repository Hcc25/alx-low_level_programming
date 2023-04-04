#include "lists.h"
/**
 * listint_len - returns the length
 * in a linked list
 * @h: a pointer
 * Return: the number of character
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len;

	if (h == NULL)
		return (0);
	for (len = 0; h != NULL; len)
		h = h->next;
	return (len);
}
