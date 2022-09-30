#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of the program. if the program is renamed,
 * will print the new name, without having to compile it again
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
