#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints struct dog
 * @d: a pointer argument to struct dog
 *
 */

void print_dog(struct dog *d)
{
        if (d != NULL)
        {
                if (d->name == NULL)
                printf("Name: (nil)\nAge: %f\nOwner: %s", d->age, d->owner);
                else if (d->age == 0)
                      printf("Name: %s\nAge:0\nOwner: %s", d->name, d->owner);
                else if (d->owner == NULL)
                printf("Name: %s\nAge: %f\nOwner: (nil)", d->name, d->age);

                else printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
        }
}

