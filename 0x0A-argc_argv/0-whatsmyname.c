#include <stdio.h>
#include "main.h"
/**
 * main - print the name of a program
 * @argc: number of argument
 * @argv:array of string
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	return (0);
}
