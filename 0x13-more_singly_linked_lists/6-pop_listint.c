#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - a function that deletes the head node
 * @head: a double pointer
 * Return: Empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	node = *head;
	*head = node->next;
	n = node->n;
	free(node);
	return (n);
}
