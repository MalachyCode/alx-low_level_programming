#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count for number of argument passed to the program in
 * the command line
 * @argv: argument vector stores each argument passed to the program in
 * the command line as stings
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
