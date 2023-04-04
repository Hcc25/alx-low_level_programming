#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: a double pointer
 * @idx: index of the node
 * @n: a new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int d;
	listint_t *temp, *node;

	if (head == NULL)
	return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (d = 0; d < idx - 1 && temp != NULL; d++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}

