#include "main.h"
#include<stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 */
int _strlen(char *s)
{
        int count = 0;

        while (*s)
        {
                ++count;
                s++;
        }
        return count;
}

