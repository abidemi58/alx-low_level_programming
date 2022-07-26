#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  copy of the string given as a parameter.
 * @str: string to be copied
 * Return: a pointer to the duplicated string, if success
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int  j, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		len++;

	dup = (char *) malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (j = 0; j < str[j]; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
