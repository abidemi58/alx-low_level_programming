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

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		tag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				tag = 1;
			}
		}
		if (tag == 0)
		{
			return (k);
		}
	}

	return (0);
}
