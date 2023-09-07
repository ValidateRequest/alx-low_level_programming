#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
        int m, n, len, p, digit;

        m = 0;
        n = 0;
        len = 0;
        p = 0;
        digit = 0;

        while (s[len] != '\0')                                                  len++;
                                                                        while (m < len && p == 0)
        {
                if (s[m] == '-')
                        ++n;

                if (s[m] >= '0' && s[m] <= '9')                                 {
                        digit = s[m] - '0';

		}
	}
									return (digit);
}
