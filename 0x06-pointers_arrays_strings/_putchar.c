#include "main.h"

/**
 * main - prints a character
 * @c: character to print
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
