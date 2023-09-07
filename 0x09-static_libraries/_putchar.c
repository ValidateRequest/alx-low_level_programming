#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a string c to stdout
 * @c: string value
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
