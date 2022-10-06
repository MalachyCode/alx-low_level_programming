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
	int size;

	size = b;

	str = malloc(sizeof(*str) * size);
	if (str == NULL)
	{
		printf("98\n");
	}
	return (str);
}
