#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabets in lowercase
 * Return: ALways 0 (success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n')
}
