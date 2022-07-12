#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int m, n, i;

	m = 0;

	while (str[m] != '\0')
	{
		m++;
	}

	if (m % 2 == 0)
	{
		for (i = m / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (m % 2)
	{
		for (n = (m - 1) / 2; n < m - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
