#include "main.h"
#include<stdio.h>

/**
 * print_array - function that prints n elements of an array
 */
void print_array(int *a, int n)
{
	for (int i =0; i < n; i++)
	{
		printf("%d,", a[i]);
	}
	printf("\n");
}
