#include<stdio.h>
/**
 * main - t prints all single digit numbers of base 10
 *  starting from 0, followed by a new line.
 *  You are not allowed to use any variable of type char
 *  Return: always 0(success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');
	putchar('\n');
	return (0);

}
