#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: it's name
 * @age: it's age
 * @owner: it's owner
 * description: it's a struct for a dog woof woof
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
