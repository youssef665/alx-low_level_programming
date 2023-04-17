#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a funtions that prints struct dog
 * @d: a struct argument
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name != NULL)
	printf("Name: %s\n", d->name);
	else
		 printf("Name:(nil)");

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner:(nil)");
	}
}
