#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the first element in listint_t linked list
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	tmp = *head;

	return (data);
}
