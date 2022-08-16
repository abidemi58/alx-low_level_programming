#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to the first element of the listint_t linked list.
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front = NULL;
	listint_t *back = NULL;

	while (*head)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}
	*head = back;

	return (*head);
}
