/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Tue 05 Jan 2019
 */

#include <stdio.h>

void static print(int n)
{
	if(n < 10)
		putchar('0' + n);
	if(n > 9)
	{
		int f,s;
		f = n/10;
		s = n%10;
		print(f);
		print(s);
	}
}

void print_formated(int n)
{
	if(n < 10)
	{
		putchar('0');
		print(n);
	}
	if( n > 9)
	{
		print(n);
	}
}

void vc_print_combo2()
{
	int first,second;
	for(first = 0; first < 99; first++)
	{
		for(second = 0; second < 100; second++)
		{
			if(first == second) continue;
		  	print_formated(first);
			putchar(' ');
			print_formated(second);	
			putchar(',');
			putchar(' ');
		}
	}
}

int main()
{
    vc_print_combo2();
	return 0;
}