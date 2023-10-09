#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Ciomputs length of a given string
 * @_str: The string
 *
 * Return: The length including terminating character;
 */
unsigned int _strlen(char *_str)
{
	unsigned int i = 0;

	while (_str[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcp - Copies src string to dest
 * @_src: Location in memory of source string
 * @_dest: Destination location in memory
 *
 * Return: Always void
 */
void _strcp(char *_src, char *_dest)
{
	unsigned int i = 0;

	while (_src[i] != '\0')
	{
		_dest[i] = _src[i];
		i++;
	}
	_dest[i] = '\0';
}

/**
 * new_dog - Creates a new dog information
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog's owner name
 *
 * Return: Dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char *) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char *) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcp(name, d->name);
	_strcp(owner, d->owner);

	d->age = age;

	return (d);
}
