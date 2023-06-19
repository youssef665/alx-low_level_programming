#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);


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
	dog_t *dog2;
	int name_2 = 0, own_2 = 0;

	if (name != NULL && owner != NULL)
	{
		name_2 = _strlen(name) + 1;
		own_2 = _strlen(owner) + 1;
		dog2 = malloc(sizeof(dog_t));

		if (dog2 == NULL)
			return (NULL);

		dog2->name = malloc(sizeof(char) * name_2);

		if (dog2->name == NULL)
		{
			free(dog2);
			return (NULL);
		}

		dog2->owner = malloc(sizeof(char) * own_2);

		if (dog2->owner == NULL)
		{
			free(dog2->name);
			free(dog2);
			return (NULL);
		}

		dog2->name = _strcpy(dog2->name, name);
		dog2->owner = _strcpy(dog2->owner, owner);
		dog2->age = age;
	}

	return (dog2);
}

/**
  * _strlen - Returns the length of a string
  * @s: String  count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int d = 0;

	for (; *s != '\0'; s++)
	{
		d++;
	}

	return (d);
}

/**
  * _strcpy - Copy strings
  * @dest: Destination value
  * @src: Source value
  *
  * Return:  pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	dest[j++] = '\0';

	return (dest);
}
