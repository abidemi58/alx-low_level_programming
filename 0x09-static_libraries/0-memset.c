#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to memory area to be filled
 * @b: the variable to be filled
 * @n: the number of byte to be filled
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
