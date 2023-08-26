#include "main.h"

/**
 * print_number - prints an integer
 * @n: input number
 */
void print_number(int n)
{
	    /* Handle the case when the integer is 0*/
    	 if (n == 0)
	 {
      		  _putchar('0');
        	  return;
         }

    /* Handle the case when the integer is negative*/
	  if (n < 0)
	  {
       	 	_putchar('-');
        	n = -n;
    	  }

    /* Initialize variables*/
  	  int divisor = 1;
 	  int numDigits = 0;
    	  int temp = n;

    /* Determine the number of digits in the integer*/
   	  while (temp > 0)
    	  {	
        	divisor *= 10;
        	numDigits++;
        	temp /= 10;
    	  }

    /* Reset the divisor to get the correct value*/
    	  divisor /= 10;

    /* Print each digit of the integer*/
    	 while (divisor != 0)
	 {
        	 int digit = n / divisor;
         	_putchar('0' + digit);
         	n %= divisor;
         	divisor /= 10;
    	 }
}
