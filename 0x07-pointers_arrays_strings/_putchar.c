#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints out the string
 * @c: character to print
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
