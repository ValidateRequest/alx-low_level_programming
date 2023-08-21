#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * @str: string to print
 */
void puts_half(char *str)
{
	int j, k, len;
	
       	len = 0;

	for (j = 0; str[j] != '\0'; j++)
		len++;
	k = (len / 2);

	if ((len % 2) == 1)
		k = ((len + 1) / 2);

	for (j = k; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}				
