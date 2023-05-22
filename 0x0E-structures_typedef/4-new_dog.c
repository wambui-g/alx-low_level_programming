#include "dog.h"
#include <stdlib.h>

/**
 * _strlen- returns length of string
 * @s: string to consider
 *
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy- copy string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

/**
 * new_dog- new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return:a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;
		new = malloc(sizeof(dog_t));

		if (new == NULL)
			return (NULL);

		new->name = malloc(sizeof(char) * name_len);
		new->owner = malloc(sizeof(char) * own_len);

		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}

		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}

		new->name = _strcpy(new->name, name);
		new->owner = _strcpy(new->owner, owner);
		new->age = age;
	}

	return (new);
}
