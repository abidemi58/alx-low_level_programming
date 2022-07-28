#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (*num == NULL)
		exit(98);

	void *num;

	*num = malloc(b);
	return (num);
}
