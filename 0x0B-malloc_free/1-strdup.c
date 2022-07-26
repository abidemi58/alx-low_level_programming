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
	unsigned int  j, len = 0;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		len++;

	dup = (char *) malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		dup[j] = str[j];
	dup[len] = '\0';
	}
	return (dup);
}
