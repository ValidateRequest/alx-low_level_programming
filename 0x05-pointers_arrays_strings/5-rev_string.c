#include "main.h"

/**
 * rev_string - function that reverses a steing
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char *t = s;

	while (t != NULL)
	{
		*t++ = *--s;
	}
}
