/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Wed 06 Jan 2019
 */

#include <stdio.h>

void vc_swap(int *a, int *b)
{
    int x, y, temp;
    a = &x;
    b = &y;

    temp = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    printf(vc_swap(5, 4));
    return 0;
}