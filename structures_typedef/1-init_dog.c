#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Description: This function initializes the members of a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* 1. Check if the pointer is valid to avoid segfaults */
	if (d != NULL)
	{
		/* 2. Use -> operator to assign values through the pointer */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
