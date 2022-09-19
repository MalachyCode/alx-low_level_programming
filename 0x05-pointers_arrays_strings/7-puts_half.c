#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{

	int length = 0;

	while (*s)
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 */
void puts_half(char *str)
{
	int length, i, half;

	length = _strlen(str);
	half = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;

	for (i = half; i < length; i++)
		_putchar(*(str + 1));
	_putchar('\n');
}
