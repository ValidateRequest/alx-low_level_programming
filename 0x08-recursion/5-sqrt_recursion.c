 #include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: input value
 */
int sqrt_helper(int n, int start, int end);

int _sqrt_recursion(int n)
{

    return sqrt_helper(n, 1, n);
}

int sqrt_helper(int n, int start, int end)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;


        if (mid * mid == n)
        {
            return mid;
        }


        else if (mid * mid > n)
        {
            return sqrt_helper(n, start, mid - 1);
        }

        else
        {
            return sqrt_helper(n, mid + 1, end);
        }
    }

    return -1;
}
