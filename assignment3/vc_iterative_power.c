/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>

int iterative_power(int n, int power)
{
    int res = 1;
    while (power > 0)
    {
        if (power & 1)
        {
            res = res * n;
        }
        power = power >> 1;
        n = n * n;
    }
    return res;
}

int main()
{
    int n = 3, power = 5;
    printf("%d", iterative_power(n, power));
    return 0;
}