#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: A pointer to the head of the listint_t list.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start_loop = head;
	listint_t *end_loop = head;

	if (head == NULL)
		return  (NULL);
	if (head == head->next)
		return (head);
	while (start_loop)
	{
		start_loop = start_loop->next;
		end_loop = head;
		while (start_loop && end_loop != start_loop)
		{
			if (end_loop == startloop->next)
			{
				return (end_loop);
			}
			end_loop = end_loop->next;
		}
	}
	return (start_loop);
}
