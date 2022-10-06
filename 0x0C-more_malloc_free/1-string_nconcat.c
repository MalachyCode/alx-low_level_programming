#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes from s2 to be copied
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;
	size = len1 + n;
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = 0;
	return (str);
}

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}
