/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>

int vc_recursive_power(int n, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else if (power % 2 == 0)
    {
        return vc_recursive_power(n, power / 2) * vc_recursive_power(n, power / 2);
    }
    else
    {
        return n * vc_recursive_power(n, power / 2) * vc_recursive_power(n, power / 2);
    }
}

int main()
{
    int n = 3, power = 5;
    printf("%d", vc_recursive_power(n, power));
    return 0;
}