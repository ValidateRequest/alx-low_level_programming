#include "main.h"

/**
 * _strcpy - a function that copies the sting pointer
 * @dest: copy to
 * @src: cooy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int t = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; t < k ; t++)
	{
		dest[t] = src[t];
	}
	dest[k] = '\0';
	return (dest);
}
