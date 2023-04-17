#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees dog
 * @d: a pointer to a struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		fre(d);
	}
}
