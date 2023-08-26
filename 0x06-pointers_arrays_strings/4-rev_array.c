#include "main.h"

/**
 * reverse_array - reverse array of intergers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m, t;

	for (m = 0; m < n--; m++)
	{
		t = a[m];
		a[m] = a[n];
		a[n] = t;
	}
}
