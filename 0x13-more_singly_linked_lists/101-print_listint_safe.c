#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to element to be printed
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	long int list;

	while (head)
	{
		list = head - head->next;
		node++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (list > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (node);
}
