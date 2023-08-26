#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input vakue
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, j;
	
	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[m] = src[j];
		m++;
		j++;
	}
	dest[m] = '\0';

	return (dest);
}
