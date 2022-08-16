#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(*head);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (del->next == NULL)
			return (-1);

		del = del->next;
	}

	tmp = del->next;
	del->next = tmp->next;
	free(tmp);

	return (1);
}
