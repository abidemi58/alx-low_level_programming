#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, dig, dig1;

	dig = 0;
	dig1 = 0;

	while (s[dig] != '\0')
	{
		dig++;
	}
	dig1 = dig - 1;
	for (i = 0; i < dig / 2; i++)
	{
		tmp = s[i];
		s[i] = s[dig1];
		s[dig1--] = tmp;
	}
}
