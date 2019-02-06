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

void vc_putnbr(int nb)
{
	print(nb);
}

int main()
{
    print(123456);
	putchar('\n');
	print(1200340056);
	return 0;
}