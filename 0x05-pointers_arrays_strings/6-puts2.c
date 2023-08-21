#include "main.h"

/**
 * puts2 - function that prints every character of a string
 * starting with first followed by a new line
 * @str: string to print
 */
void puts2(char *str)
{
	int len = 0;
	int m = 0;
	char *z = str;
	int h;

	while (*z != '\0')
	{
		z++;
		len++;
	}
	m = len - 1;

	for (h = 0; h <= m; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}

	_putchar('\n');
}
