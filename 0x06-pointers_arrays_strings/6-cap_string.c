#include "main.h"

/**
 * cap_string - capitalizes all strings
 * @str:input value
 */
char *cap_string(char *str)
{
    int i = 0;
    int capitalizeNext = 1; 

    while (str[i])
    {
        /* Check if current character is a separator*/
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
       	{

            capitalizeNext = 1;
        }
        
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
       	{
            if (capitalizeNext)
	    {
                
                if (str[i] >= 'a' && str[i] <= 'z')
	       	{
                    str[i] = str[i] - 32; 
                }
                capitalizeNext = 0; 
            }
        }
        i++;
    }
    return str;
}
