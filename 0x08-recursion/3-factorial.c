#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: integer which factorial is to be returned
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
