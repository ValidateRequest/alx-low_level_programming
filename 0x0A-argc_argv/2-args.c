#include "main.h"
#include <stdio.h>

/**
 * main - prints all argumrnts it receives
 * @argc: numner if all arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
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
