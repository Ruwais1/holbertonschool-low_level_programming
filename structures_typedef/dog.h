#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct for dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Structure that stores name, age and owner of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* --- Function Prototypes --- */

/* Task 1: Initialize a dog struct */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Task 2: Print a dog struct */
void print_dog(struct dog *d);

/* Task 4: Create a new dog (with memory allocation) */
dog_t *new_dog(char *name, float age, char *owner);

/* Task 5: Free memory allocated for a dog */
void free_dog(dog_t *d);

#endif /* DOG_H */
