/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Wed 06 Jan 2019
 */

#include <stdio.h>

void vc_ultimate_pt(int *********n)
{
    *********n = 77;
}

int main()
{
   int a = 0;
   int *a1 = &a;
   int *a2 = &a1;
   int *a3 = &a2;
   int *a4 = &a3;
   int *a5 = &a4;
   int *a6 = &a5;
   int *a7 = &a6;
   int *a8 = &a7;
   int *a9 = &a8;
   printf("%d , \n",a);
   vc_ultimate_pt(a9);
   printf("%d",a);
   return 0;
}