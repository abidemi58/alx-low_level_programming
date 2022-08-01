#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog - a data type with tag dog 
 * dog_t - the structure variable
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
