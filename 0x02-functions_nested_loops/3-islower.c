#include "main.h"
/**
 * _islower - prints a function that checks for lowercase character.
 * c: character to be checked
 * Return: 1 if c is lowercase returns 0 otherwise
 */
int _islower(int c)
{
	int r;
	int s;
	int t;
	
	r = 'H';
	s = 'o';
	t = '108';
	if ((islower(r)))
	{
		_putchar(r +'0');
	}
	else if ((islower(s)))
	{
		_putchar(s + '0');
	}
	else if ((islower(t)))
	{
		_putchar(t + '0');
	}
	return (0);
}
