#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: Returns a pointer to the beginning of the 
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[j] != '\0' && needle[i] != '\0')
		if (needle[i] != haystack[j])
		{
			j++;
			i = 0;
		}
		else
		{
			i++;
			j++;
		}
	return ('\0');
}
