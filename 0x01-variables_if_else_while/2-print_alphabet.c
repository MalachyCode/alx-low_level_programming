#include <stdio.h>
#include <unistd.h>
/**
 * main - main block
 * Description: Use 'putchar' function to print the alphabet in lowercase.
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
