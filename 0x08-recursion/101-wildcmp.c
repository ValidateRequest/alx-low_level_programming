#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings
 * @*s1: input value
 * @*s2: input value
 * Return: returns 1 if the strings can be considered identical
 * , otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
       	{
	       	return (*s1 == '\0');
       	}
       
	if (*s2 == '*')
       	{
	       	while (*s1 != '\0')
	       	{
		       	if (wildcmp(s1, s2 + 1))
		       	{
			       	return (1);
		       	}
			
			s1++;
		}
	       
		return (wildcmp(s1, s2 + 1));
       	}
       
	if (*s1 == '\0' || *s1 != *s2)
       	{
	       	return (0);
	}
       
	return (wildcmp(s1 + 1, s2 + 1));
}
