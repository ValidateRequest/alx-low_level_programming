#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to the prrogram
 * @argc: number if arguments
 * @argv: array argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
