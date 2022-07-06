#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{

	int num, num2, num3;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');

				num3 = num * num2;

				if (num3 <= 99)
					_putchar(' ');
				if (num3 <= 9)
					_putchar(' ');

				if (num3 >= 100)
				{
					_putchar((num3 / 100) + '0');
					_putchar(((num3 / 10)) % 10 + '0');
				}
				else if (num3 <= 99 && num3 >= 10)
				{
					_putchar((num3 / 10) + '0');
				}
				_putchar((num3 % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
