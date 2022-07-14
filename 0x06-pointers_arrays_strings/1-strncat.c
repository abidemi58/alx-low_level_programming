#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @dest:destination of the string
 * @src: source of the string
 * @n: bytes fron string src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)

	for (j = 0; src[j] != '\0' && j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
