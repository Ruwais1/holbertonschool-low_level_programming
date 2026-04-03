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
	/* Check if the pointer is valid before assigning values */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
