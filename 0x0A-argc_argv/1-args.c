#include "main.h"
#include <stdio.h>
/**
 * main -  prints the number of arguments passed into it
 * @argc: number of argument
 * @argv:array of string
 * Return: always 0
 */
int main(int argc, char *argv[])/**
				 *can also declare _attribute_((unused)) to argc
				 * instead of calling (void) to
				 */

{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

