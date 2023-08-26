#include "main.h"

/**
 * _strcat - concatenates teo strings
 * @dest: input valye
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[m];
		m++;
		n++;
	}
	dest[m] = '\0';

	return (dest);
}
