#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - that multiplies two numbers passed as arguments in the
 * command line.
 * @argc: argument count
 * @argv: string of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
