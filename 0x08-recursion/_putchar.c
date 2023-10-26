#include "main.h"
#include<unistd.h>

/**
 * _putchar - prints character
 * @c: the character to print
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}
