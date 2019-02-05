#include <stdio.h>

void vc_print_alphabet()
{
	char index;
	for(index = 'a'; index <= 'z'; index++)
	{
		putchar(index);
	}
	putchar('\0');
	putchar('\n');

}

void vc_print_reverse_alphabet()
{
	char index;
	for(index = 'z'; index >= 'a'; index--)
	{
		putchar(index);
	}
	putchar('\0');
	putchar('\n');
}

void vc_print_numbers()
{
	char index;
	for(index = '0'; index <=  '9'; index++)
	{
		putchar(index);
	}
	putchar('\0');
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
				printf("%d%d%d, ",first,second,third);
			}
		}
	}
}

int main()
{
	vc_print_alphabet();
	vc_print_reverse_alphabet();
	vc_print_numbers();
	vc_is_negative(-2);
	vc_is_negative(2);	
	vc_print_combo();
	return 0;
}
