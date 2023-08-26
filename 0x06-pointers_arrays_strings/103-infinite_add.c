#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: inout value
 * @n2: inout value
 * @r: buffer for storing results
 * @size_r: is the buffer size
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int len1 = strlen(n1);
  int len2 = strlen(n2);
  int max_len = len1 > len2 ? len1 : len2;
  int carry = 0;
  int i;

  if (max_len + 1 > size_r) {
    return 0;
  }

  r[max_len + 1] = '\0';

  for (i = 0; i < max_len; i++) {
    int digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
    int digit2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0;
    int sum = digit1 + digit2 + carry;

    r[max_len - i] = sum % 10 + '0';
    carry = sum / 10;
  }

  if (carry == 1) {
    r[0] = '1';
    return r;
  }

  return r + 1;
}
