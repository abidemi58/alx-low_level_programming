#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - prints an char
 * @args: list argument to be printed
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - prints an integer
 * @args: list argument to be printed
 */

void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: list argument to be printed
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - prints a string
 * @args: list argument to be printed
 */
void print_s(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: list all types of arguments passed to the function
 * @...: variable number of argument
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;

	pri_t p[] = {
		{"c", print_char},
		{"s", print_s},
		{"i", print_integer},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list type;
	char *separator = "";

	va_start(type, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*p[j].t == format[i])
			{
				printf("%s", separator);
				p[j].f(type);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(type);
	printf("\n");

}
