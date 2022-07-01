#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
/**main is the entry point 
 **Output of the number,positive,zero and if negative./*
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
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
