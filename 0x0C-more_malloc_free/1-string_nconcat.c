#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate into
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	cat = malloc(sizeof(char) * (len + 1));

	if (cat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		cat[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		cat[len++] = s2[i];

	cat[len] = '\0';

	return (cat);
}
