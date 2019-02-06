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

void vc_print_combo()
{
	int first,second,third;
	for(first = 0;first < 8;first++)
	{
		for(second = 1;second < 9;second++)
		{
			for(third = 2;third < 10; third++)
			{
				if(first == second) continue;
				if(second == third) continue;
				if(first == third) continue;
				print(first);
				print(second);
				print(third);
				putchar(',');
				putchar(' ');
			}
		}
	}
}

int main()
{
    vc_print_combo();
	return 0;
}