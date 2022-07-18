#include "main.h"
/**
 * _strspn - the length of a prefix substring
 * @s: the string to search
 * @accept: the pointer containing all the characters
 * Return: Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, tag;

	while (i < j)
	{
		accept[i] = s[tag + i];
		i++;
	}
	accept[j] = '\0';
}
