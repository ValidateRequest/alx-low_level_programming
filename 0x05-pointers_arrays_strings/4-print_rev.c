#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s:the string to print
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int m;

	while (*s != '\0')
	{
		len++;
		s++
	}
	s--;
	for (m = len; m > 0; m++)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
