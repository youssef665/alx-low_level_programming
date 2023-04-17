#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a functions that intialize a variable of type struct dog
 * @d: an argument pointer of type struct
 * @name: an argument pointer character
 * @age: an argument integer
 * @owner: an argument pointer character
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}

}
