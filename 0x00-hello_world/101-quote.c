#include <stdio.h>
#include<unistd.h>
/**
 *main - Prints out the last part of a quote in the standard err *or.
 *Return: always 1(success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora korpar, 2015-10-19", 59);
	return (1);
}
