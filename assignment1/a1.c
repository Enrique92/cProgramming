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

void vc_print_alphabet()
{
	char index;
	for(index = 'a'; index <= 'z'; index++)
	{
		putchar(index);
	}
	putchar('\n');

}

void vc_print_reverse_alphabet()
{
	char index;
	for(index = 'z'; index >= 'a'; index--)
	{
		putchar(index);
	}
	putchar('\n');
}

void vc_print_numbers()
{
	char index;
	for(index = '0'; index <=  '9'; index++)
	{
		putchar(index);
	}
	putchar('\n');

}

void vc_is_negative(int n)
{
	if(n < 0)
		putchar('N');
	if(n >= 0)
		putchar('P');
	putchar('\n');
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

void vc_putnbr(int nb)
{
	print(nb);
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
	//vc_print_alphabet();
	//putchar('\n');
	//vc_print_reverse_alphabet();
	//putchar('\n');
//	vc_print_numbers();
//	putchar('\n');
//	vc_is_negative(-2);
//	putchar('\n');
//	vc_is_negative(2);	
//	putchar('\n');
//	vc_print_combo();
	//putchar('\n');
	//vc_print_combo2();
	//putchar('\n');
	//print(123456);
	//putchar('\n');
	//print(1200340056);
	//putchar('\n');
	return 0;
}
