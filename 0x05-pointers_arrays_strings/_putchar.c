#include "main.h"
#include<stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On Success 1
 */
int _putchar(char c)
{
	if (c == EOF)
	{
		return (-1);
	}
	_putchar(c);

	return (0);
}
