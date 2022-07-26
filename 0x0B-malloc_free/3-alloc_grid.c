#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);
	int **ipp;
	int i;

	ipp = (int **) malloc(height * sizeof(int *));

	if (ipp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ipp[i] = (int *) malloc(width * sizeof(int));
		if (ipp[i] == NULL)
	}
	free (ipp);
	return (ipp);
}
