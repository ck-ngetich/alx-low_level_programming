#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - retturns the lenght of a string
 * @s: string available
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * _strcpy - copies the string poined to by src
 * including the terminating null byte (\0)
 * to buffer pointed by dest
 * @dest: pointer to the buffer
 * @src: the string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, x;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: new owner of the dog
 * Return: pointer of new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int m, n;

	m = _strlen(name);
	n = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (m + 1));
	if (dog->name == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (n + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
