#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - returns the length of a string
  * @str: the pointer to the string
  *
  * Return: the string's length
  */

int _strlen(char *str)
{
int length = 0;
for (; *str != '\0'; str++)
{
length++;
}
return (length);
}

/**
 * _strcopy - copies content of a string to a new string
 *@dest: the new string
 *@src: the new string
 *Return: length of the string
 */

char *_strcopy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}

/**
 *new_dog - creates a new dog
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the dog's owner
 *Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
{
return (NULL);
}
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog);
return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}
