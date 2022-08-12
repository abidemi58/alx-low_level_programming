#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 * of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int n;

	list_t *new node;

	new node = malloc(sizeof(list_t));

	if (new node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new node);
		return (NULL);
	}

	for (n = 0; str[n];)
		n++;

	new node->str = dup;
	new node->n = n;
	new node->next = *head;

	*head = new node;

	return (new node);
}
