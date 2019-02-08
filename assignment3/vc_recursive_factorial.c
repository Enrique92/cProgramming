/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>

int vc_recursive_factorial(int n)
{
    if (n == 0) {
        return 1;
    }

    return n * vc_recursive_factorial(n - 1);
}

int main()
{
    int n = 5;
    printf("%d", vc_recursive_factorial(n));
    return 0;
}
