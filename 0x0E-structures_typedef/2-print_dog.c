#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: the dog to be initialized
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if
		printf(Name : "%s\n", d->name);
	if (d->age == NULL)
		printf("Age: (ni1)\n");
	else if
		printf(Age : "%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else if
		printf(Owner : "%s\n", d->owner);
}
