#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the first node in the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *tmp;

	if (*h == NULL)
		return (0);

	while (*h)
	{
		len++;
		tmp = *h;
		*h = (*h)->next;
		free(*h);

		if (*h < tmp)
			break;
	}

	*h = NULL;

	return (len);
}
