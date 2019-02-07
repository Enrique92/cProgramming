/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Wed 06 Jan 2019
 */

#include <stdio.h>

void vc_div_mod(int *a, int *b)
{
    int div, mod;
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int main()
{
    int a = 5, b = 2;
    vc_div_mod(&a, &b);
    printf("%d, %d", a, b);
    return 0;
}