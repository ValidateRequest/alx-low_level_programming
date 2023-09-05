#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aag;
	int i, m = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aag = malloc(sizeof(char) * (i + 1));

	if (aag == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		aag[m] = str[m];

	return (aag);
}
