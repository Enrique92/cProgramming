/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Wed 06 Jan 2019
 */

#include <stdio.h>

void vc_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int a = 5, b = 2;
    int div, mod;
    vc_div_mod(a, b, &div, &mod);
    printf("%d, %d", div, mod);
    return 0;
}