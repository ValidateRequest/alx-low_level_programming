#include "main.h"

/**
 * leet - encodes string to 1337
 * @str: string to encode
 */
char *leet(char *str)
{
    char mappings[8] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T'};
    char replacements[8] = {'4', '4', '3', '3', '0', '0', '7', '7'};
    int i, j;

    
    for (i = 0; str[i]; i++)
    {
        
        for (j = 0; j < 8; j++)
       	{
         
            if (str[i] == mappings[j])
	    {
                
                str[i] = replacements[j];
                break; 
            }
        }
    }
    return str;
}
