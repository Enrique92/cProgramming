/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Tue 05 Jan 2019
 */

#include <stdio.h>

void vc_print_numbers()
{
	char index;
	for(index = '0'; index <=  '9'; index++)
	{
		putchar(index);
	}
	putchar('\n');
}

int main()
{
    vc_print_numbers();
	return 0;
}