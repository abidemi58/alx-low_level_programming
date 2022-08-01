#include <stdlib.h>
#include "dog.h"
/**
 * void init_dog - initialize a variable of type struct dog
 * @d: dog to be initialized.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d -> name;
	d -> age;
	d -> owner;
}
