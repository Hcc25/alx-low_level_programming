#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Add node at the end
 * @head: head of the double pointer
 * @n: an integer
 * Return: NULL if the code fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dig;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	dig = malloc(sizeof(listint_t));
	if (dig == NULL)
		return (NULL);
	dig->n = n;
	dig->next = NULL;
	if (*head == NULL)
	{
		*head = dig;
		return (dig);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = dig;
	return (dig);
}
