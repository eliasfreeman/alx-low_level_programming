#include <stdlib.h>
#include "dog.h"

/**
 * _copy  -   Make a copy of passed in argument
 * @src:      Data to make copy of
 * Return:    Pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int x, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; src[x] != '\0'; x++)
	{
		ptr[x] = src[x];
	}

	ptr[x] = '\0';
	return (ptr);
}

/**
 * new_dog     - Create a new dog variable
 * @name:        Name of the dog
 * @age:         Age of the dog
 * @owner:       Owner of the dog
 * Return:       Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	bing = malloc(sizeof(dog_t));
	if (bingo == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(bingo);
		return (NULL);
	}
	(*bingo).name = new_name;

	(*bingo).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*bingo).name);
		free(bingo);
		return (NULL);
	}
	(*bingo).owner = new_owner;

	return (bingo);
}
