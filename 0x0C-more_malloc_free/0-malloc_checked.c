#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be alloctaed
 *
 * Return: 0 except there's an error
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(sizeof(*str) * b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
