#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer of the first node
 * @index: index of the node
 * Return: pointer of the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h;

	if (head == NULL)
		return (NULL);
	for (h = 0; h < index; h++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
