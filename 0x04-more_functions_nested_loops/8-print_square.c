#include "main.h"

/**
 * print_square - prints a sqaure of a variable length
 * @size: dimensions of square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
