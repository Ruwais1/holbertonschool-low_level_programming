#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t struct
 * @d: Pointer to the dog to free
 *
 * Description: This function frees the name, the owner, and
 * the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the allocated copies of name and owner first */
		free(d->name);
		free(d->owner);
		
		/* Finally, free the struct itself */
		free(d);
	}
}
