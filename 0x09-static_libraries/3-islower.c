#include "main.h"
                                                                /**
 * _isupper - uppercase letterd
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
