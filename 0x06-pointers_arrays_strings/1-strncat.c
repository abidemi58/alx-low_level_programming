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

	j = 0;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[j - i] = src[i];
		dest[j - i] = '\0';
	}
	return (dest);
}
