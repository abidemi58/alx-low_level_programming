#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, j, i, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (j = 0; av[arg][j]; j++)
			len++;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (j = 0; av[arg][j]; j++)
			str[i++] = av[arg][j];

		str[i++] = '\n';
	}

	str[len] = '\0';

	return (str);
}
