#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to element to be printed
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	size_t new;
	const listint_t *tmp = NULL;
	const listint_t *list = NULL;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		node++;
		tmp = tmp->next;
		list = head;
		new = 0;

		while (new < node)
		{
			if (tmp == list)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (node);
			}
			list = list->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (node);
}
