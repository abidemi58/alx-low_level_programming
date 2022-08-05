#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of integer passed
 * @...: a varaiable number of parameter
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, tog = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		tog += va_arg(ap, int);
	}
	va_end(ap);
	return (tog);
}
