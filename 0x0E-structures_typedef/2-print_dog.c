#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: struct to print
 * Return: void
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
d->name != NULL ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
d->age != NULL ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
d->owner != NULL ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
}
