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
	printf("argv: %s\n", argv[0]);
	printf("argc: %d\n", argc);
	return (0);
}
