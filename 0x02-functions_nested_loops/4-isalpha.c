#include "main.h"
/**
 * _isalpha - Entry point
 * @c: the integer value it recieves
 * Description: function that checks for alphabetic character
 * Return: 1 or 0 in otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
