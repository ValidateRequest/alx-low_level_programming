#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome
 *  and 0 if not.
 *  @*s: string to output
 */
int is_palindrome(char *s)
{
       	int i, j;
	int len = strlen(s);
       
	if (len == 0)
       	{
	       	return (1);
	}
	
	for (i = 0, j = len - 1; i < j; i++, j--)
       	{
	       	if (s[i] != s[j])
	       	{
		       	return (0);
		}
	}
       
	return (1);
}
