#include<unistd.h>
#include "main.h"

/**
 * main - print _putchar
 * @c: the character to print
 *
 * Return: Always 1 (Success)
 * On error -1, is returned and error is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
