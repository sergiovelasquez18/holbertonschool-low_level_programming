#include <stdio.h>
#include"dog.h"
#include <stdlib.h>
char *_strdup(char *str);

/**
 * *new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer of the new dog or NULL is failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = NULL;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->name = _strdup(name);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = _strdup(owner);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}

/**
 * _strdup - function that returns a pointer to a very
 * recently reallocated memory space
 * which is a duplicate of the string str
 * @str: string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	int ser;

	if (str == NULL)
	{
		return (NULL);
	}
	for (ser = 0; str[ser] != '\0'; ser++)
		;
	ptr = malloc(sizeof(char) * ser + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ser = 0;
	while (str[ser] != '\0')
	{
		ptr[ser] = str[ser];
		ser++;
	}
	ptr[ser] = '\0';
	return (ptr);
}
