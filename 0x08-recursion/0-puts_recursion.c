#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: character to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	_putchar('\n');
}
