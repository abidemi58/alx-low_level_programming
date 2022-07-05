#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: the number to be printed
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int b = n % 10;

	if (b < 0)
		b = -b;
	_putchar(b + '0');

	return (b);
}
