#include<stdio.h>

/**
 * main - print _putchar and returns 0.
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
