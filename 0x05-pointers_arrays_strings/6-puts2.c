#include "main.h"

/**
 * puts2 - function that prints every character of a string
 * starting with first followed by a new line
 * @str: string to print
 */
void puts2(char *str)
{
	int m = 0;

	while (str != NULL)
	{
		puts(str[m]);
		m += 2;
	}
	puts("\n");
}
