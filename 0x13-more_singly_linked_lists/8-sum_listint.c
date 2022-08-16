#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: the pointer to the head of the listint_t linked list.
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
