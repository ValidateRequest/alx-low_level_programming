#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 */
int main(void)
{
	void print_alphabet(void)
	{
		char alp;

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
			_putchar('\n');
		}
	}
}

