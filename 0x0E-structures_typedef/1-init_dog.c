#include <stdio.h>
#include "dog.h"

/**
 * main - initializes a variable of type structre dog
 * @d: the struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog doggy;
*doggy = &d;
doggy->name = name;
doggy->age = age;
doggy->owner = owner;
};
