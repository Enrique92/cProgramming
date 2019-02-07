/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Wed 06 Jan 2019
 */

#include <stdio.h>

void vc_pt(int *n)
{
    *n = 77;
}

int main()
{
   int a = 0;
   printf("%d\n", a);
   vc_pt(&a);
   printf("%d", a);
   return 0;
}