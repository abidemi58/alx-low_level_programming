#include "main.h"
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (actual_sqrt_recursion(n, i + 1));
	else 
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be squared
 * Return: If n does not have a natural 
 * square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (actual_sqrt_recursion(n, 2))
