#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
      	int i, total_length = 0, current_index = 0;
	char *str;
	
	if (ac == 0 || av == NULL)
		return (NULL);
	
	for (i = 0; i < ac; i++)
       	{
	       	total_length += strlen(av[i]) + 1;
       	}
	
	str = malloc(total_length * sizeof(char));
       
	if (str == NULL)
       	{
	       	return (NULL);
	}
             
	for (i = 0; i < ac; i++)
       	{
		strcpy(str + current_index, av[i]);
	       	current_index += strlen(av[i]);
		str[current_index] = '\n';
		current_index++;
	}
	
	str[total_length - 1] = '\0';
	
	return (str);
}
    
