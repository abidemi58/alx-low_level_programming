#include<stdio.h>
/**
 *  main- prints all possible different combinations of two digits.
 * Return: always 0(success)
 */
int main(void)
{
	int a, b;

	for (a = 24; a <= 59; a++)
	{
		for (b = 25; b <= 60; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 59 || b != 60)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
