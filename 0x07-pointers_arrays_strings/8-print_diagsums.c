#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;

	int d1 = 0, d2 = 0;

	for (int i = 0; i < size; i++)
	{
		d1 += a[(size * i) + i];
		d2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", d1, d2);
}

