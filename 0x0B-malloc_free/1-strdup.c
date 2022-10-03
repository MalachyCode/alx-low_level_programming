#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a duplicate of str
 * @str: string
 * @copy: the duplicated str
 *
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	char *copy;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
		;
	copy = malloc(sizeof(*str) * size + 1);

	if (copy == 0)
	{
		return (NULL);
	}
	while (size--)
		copy[size] = str[size];

	return (copy);
}
