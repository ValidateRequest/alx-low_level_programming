#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	    {
        	       if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		      {
       				  int offset = (str[i] >= 'a') ? 'a' : 'A';
        /* Apply the ROT13 transformation to the letter*/
    			           str[i] = (str[i] - offset + 13) % 26 + offset;
        		}
     		}

    return (str);
}
