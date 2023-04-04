#include "lists.h"
/**
 * sum_listint - sum of all data
 * @head: pointer to the first node
 * Return: data summation
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
