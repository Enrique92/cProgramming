/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>

int vc_iterative_factorial(int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
    {
        res *= i;
    }

    return res;
}

int main()
{
    int n = 5; 
    printf("%d", vc_iterative_factorial(n)); 
    return 0; 
}