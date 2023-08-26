#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints content of size byte
 * buffer pointed by b
 * @b: buffer storage
 * @size: jnput valu
 */

void print_buffer(char *b, int size)
{
	int j,i;
       	if (size <= 0)
       	{
	       	printf("\n");
	       	return;
       	}
	for (i = 0; i < size; i += 10)
       	{
		printf("%08x ", i);
		for (j = 0; j < 10; j++)
	       	{
		       	if (i + j < size)
			{
			      	printf("%02x ", b[i + j]);
		       	} else {
			       	printf("   ");
		       	}
		}
	       	printf(" ");
		for (j = 0; j < 10; j++)
	       	{
			if (i + j < size)
		       	{
				if (b[i + j] >= 32 && b[i + j] <= 126)
			       	{
				       	printf("%c", b[i + j]);
       				 } else {
         				 printf(".");
       				 }
     			 }
    		 }
   			 printf("\n");
  	}
}
 
