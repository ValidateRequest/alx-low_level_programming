#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: If the string is located - pointe to the beginning
 * of the located string
 * NULL - If the substring is not located
 */
char *_strstr(char *haystack, char *needle)
{
        int index;

        if (*needle == 0)
                return (haystack);

        while (*haystack)
        {
                index = 0;

                if (haystack[index] == needle[index])                           {
                        do {
                                if (needle[index + 1] == '\0')
                                        return (haystack);
                                index++;
                        } while (haystack[index] == needle[index
]);
                }

	}
	return (needle);
}
