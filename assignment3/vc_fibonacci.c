/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>

int vc_fibonacci(int n)
{
    if (n < 0)
    {
        return -1;
    }

    if (n <= 1)
    {
        return n;
    }
    return vc_fibonacci(n - 1) + vc_fibonacci(n - 2);
}

int main()
{
    int n = 9;
    printf("%d", vc_fibonacci(n));
    return 0;
}