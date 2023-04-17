#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains dog properties
 * @name: pointer character to dog name
 * @age: intger
 * @owner: pointer to owner's name
 *
 * Description: struct that contains the proeries of the dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;










#endif
