#include "main.h"
#include<stdlib.h>
#include<time.h>

/**
 *  main - program that generates random valid
 *  passwords for the program 101-crackme
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int pas[100];
	int m, sum, n;

	sum = 0;

	srand(time(NULL));

	for (m = 0; m < 100; m++)
	{
		pas[m] = rand() % 78;
		sum += (pas[m] + '0');
		_putchar(pas[m] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			_putchar(n + '0');
			break;
		}
	}
	return (0);
}
