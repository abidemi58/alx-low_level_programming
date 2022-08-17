#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the first node in the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *node = *h;
	listint_t *tmp;

	if (*h == NULL)
		return (0);

	while (node)
	{
		len++;
		tmp = node;
		node = node->next;
		free(node);

		if (tmp < node)
			break;
	}
	*h = NULL;

	return (len);
}
