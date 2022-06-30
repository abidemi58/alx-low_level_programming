#include<unistd.h>
/**
 * main- prints "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error
 * Return:always 1(success)
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",58);
	return(1);
