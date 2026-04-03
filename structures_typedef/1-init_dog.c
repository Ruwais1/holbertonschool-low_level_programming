#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Description: This function assigns values to the members of a struct dog
 * through a pointer. It includes a safety check for NULL pointers.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Safety check: ensure the pointer d is not NULL */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
