#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to the address of the head of the listint_t list.
 * @idx: the index of the list where the new node should be added
 * @n: integer for the new node to contain
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *stor = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (stor == NULL || stor->next == NULL)
			return (NULL);

		stor = stor->next;
	}

	new->next = stor->next;
	stor->next = new;

	return (new);
}
