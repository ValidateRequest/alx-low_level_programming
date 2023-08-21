#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a bew li e
 * @str: string to print
 */
void puts_half(char *str)
{
	int m = 0;

	while (str != NULL)
	{
		if (m >= (strlen(str) - 1) / 2)
		{
			puts(str);
			break;
		}
		m++;
	}
	puts("\n";
}				
