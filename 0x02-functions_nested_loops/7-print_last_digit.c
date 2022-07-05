#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: the number to be printed
 * Return:Returns the value of the last digit
 */
int print_last_digit(int n)
{
	if (n / 10)
		_putchar(n / 10);
		_putchar(n % 10 + '0');
}
