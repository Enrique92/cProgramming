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

int get_first(int n)
{
	int rez = 0;
	int i;
	for(i = 1;i < n;i++)
	{
		rez *= 10;
		rez +=i;
	}
	return rez;
}

int get_last(int n)
{
	int s = 9 - n + 1;
	int i = s;
	int rez = 0;
	for(i = s;i <= 9;i++)
	{
		rez *= 10;
		rez +=i;
	}
	return rez;
}

int main()
{
    int a = get_first(6);
	print(a);
	putchar('\n');
	int b = get_last(6);
	print(b);
	return 0;
}