#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to
 * Return: flipped_bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cmp = n ^ m, result = 0;

	while (cmp > 0)
	{
		result += (cmp & 1);
		cmp >>= 1;
	}

	return (result);
}
