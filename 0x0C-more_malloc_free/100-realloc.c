#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr:pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size:the size, in bytes, of the allocated space for ptr
 * @new_size:the new size, in bytes of the new memory block
 * Return:If new_size == old_size - ptr.
 * If new_size == 0 and ptr is not NULL - NULL.
 * Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	char *str, *fill;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);

		if (ptr1 == NULL)
			return (NULL);

		return (ptr1);

	}
	str = ptr;
	ptr1 = malloc(sizeof(*str) * new_size);

	if (ptr1 == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = ptr1;

	for (i = 0; i < old_size && i < new_size; i++)
		fill[i] = *str++;

	free(ptr);
	return (ptr1);
}
