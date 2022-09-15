#include <stdio.h>

/**
 * main - program that prints out the largest prime factor of a number
 * Return: 0
 */
int main(void)
{
	int 1 = 2;
	long n = 612852475143;


	while (i < n)
	{
		while (n % i == 0)
		{
			if (n == i)
			{
				break;
			}
			n /= i;
		}
		i++;


	}

	printf("%lu\n", n);
	return (0);
}
