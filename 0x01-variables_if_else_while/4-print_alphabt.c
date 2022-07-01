#include <stdio.h>
/**
 * main - Write a program that prints thie
 * alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * Return: Always 0(sucess)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		putchar(letter);
	}
	putchar('\n');
	return (0);

}

