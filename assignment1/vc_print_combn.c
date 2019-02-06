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

int is_num_valid(int num, int size)
{	
	int nums[size];
	int i,j;
	for(i = 0; i < size;i++)
	{
		int val = num%10;
		nums[i] = val;;
		num /= 10;
	}
	for(i = 0;i<size;i++)
	{
		for(j = i+1;j < size - 1;j++)
		{
			if(nums[i] == nums[j])
			{
				return 0;
			}
		}
	}
	return 1;
}

void vc_print_combn(int n)
{
	int start = get_first(n);
	int end = get_last(n);
	int i;
	for(i = start; i <= end; i++)
	{
		if(!is_num_valid(i,n)) continue;
		print(i);
		putchar(',');
		putchar(' ');
	}
}

int main()
{
    vc_print_combn(3);
}