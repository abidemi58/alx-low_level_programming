#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: name to be printed
 * @f: A pointer to a function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);
}
