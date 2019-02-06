/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Tue 05 Jan 2019
 */

#include <stdio.h>

void vc_print_reverse_alphabet()
{
	char index;
	for(index = 'z'; index >= 'a'; index--)
	{
		putchar(index);
	}
	putchar('\n');
}

int main()
{
    vc_print_reverse_alphabet();
	return 0;
}