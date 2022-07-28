#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of element
 * @size: size of each element
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 * Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memb;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memb = malloc(size * nmemb);
		if (memb == NULL)
			return (NULL);

		fill = memb;

		for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (memb);

}
