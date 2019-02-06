/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Tue 05 Jan 2019
 */

#include <stdio.h>

void vc_is_negative(int n)
{
	if(n < 0)
		putchar('N');
	if(n >= 0)
		putchar('P');
	putchar('\n');
}

int main()
{
    vc_is_negative(-2);
    putchar('\n');
    vc_is_negative(2);	
	return 0;
}