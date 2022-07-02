#include<stdio.h>
/**
 *  main- prints all possible combinations of single-digit numbers
 * Return: always 0(success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 8; number++)
	{
		putchar((number % 10) + '0');
		if (number == 8)

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
