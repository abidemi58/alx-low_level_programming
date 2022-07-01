#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
/* function main the entry point goes there */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

		printf("%d\n", n);
	if (n > 0)
	{
		printf("value %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("value %d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("value %d is negative\n", n);
	}
	return (0);
}
