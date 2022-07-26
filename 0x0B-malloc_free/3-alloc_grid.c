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
	int **ipp;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ipp = (int **) malloc(height * sizeof(int *));

	if (ipp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ipp[i] = (int *) malloc(width * sizeof(int));
		if (ipp[i] == NULL)
	{
			free(ipp);
			for (j = 0; j <= i; j++)
				free(ipp[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ipp[i][j] = 0;
		}
	}
	return (ipp);
}
