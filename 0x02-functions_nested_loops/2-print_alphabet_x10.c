#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: prints alphabet 10 times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
