#include "main.h"
/**
 * *_strncpy -  copies a string
 * @dest:pointer to destination of the array
 * @src:  string to be appended.
 * @n:maximum number of characters to be appended.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0' && i < n)
	{
		scr[i]  = dest[i];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
