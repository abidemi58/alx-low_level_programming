#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments
 * @argv: An array of strings
 * Return: If the program receives two arguments - 0.
 * If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int mul1, mul2, bal;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);
	bal = mul1 * mul2;

	printf("%d\n", bal);
	return (0);
}

