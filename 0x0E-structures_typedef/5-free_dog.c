#include "dog.h"

/**
 * free_dog - a function that frees a dog
 * @d: a pointer argument to dog_t
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
}
