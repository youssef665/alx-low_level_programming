#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if it fails and pointer on success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if(
