#include<unistd.h>
/**
 *main - Prints out the last part of a
 *quote in the standard error.
 *Return: always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\"- Dora korpar, 2015-10-19", 59);
	return (1);
}
