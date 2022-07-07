#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	printf("Enter the numbers");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
	{
		printf("largest: %d", a);
	}
	else if (b > a && b > c)
	{
		printf("largest: %d", b);
	}
	else
	{
		printf("largest: %d", c);
	}

	return (largest);
}
