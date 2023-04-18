#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - returns the length of a string
  * @str: the string
  *
  * Return: length of str
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
  * _strcpy - copies a string
  * @dest: the string to copy
  * @src: the string to copy to
  *
  * Return: new string, dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

for (i = 0; src[i] != '\0'; i++)
{
*(dest + i) = *(src + i);
}
dest[i++] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: struct
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int name_len = 0, owner_len = 0;

if (name != NULL && owner != NULL)
{
name_len = _strlen(name) + 1;
owner_len = _strlen(owner) + 1;
dog = malloc(sizeof(dog_t));

if (dog == NULL)
{
return (NULL);
}

dog->name = malloc(sizeof(char) * name_len);

if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * owner_len);

if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

dog->name = _strcpy(dog->name, name);
dog->age = age;
dog->owner = _strcpy(dog->owner, owner);
}

return (dog);
}