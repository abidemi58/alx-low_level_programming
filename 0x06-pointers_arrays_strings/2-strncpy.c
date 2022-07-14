#include "main.h"
/**
 * *_strncpy -  copies a string
 * @dest:pointer to destination of the array
 * @src:  string to be appended.
 * @n:maximum number of characters to be appended.
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i]  = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
