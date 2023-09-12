#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - calculates the length of a string.
  * @str: the string.
  * Return: the length.
  */

int	_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
  * _strcpy - copy src string into dest.
  * @src: source string.
  * @dest: destination string.
  */

void	_strcpy(char *dest, char *src)
{
	int	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
