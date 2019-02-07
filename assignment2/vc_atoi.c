/**
 * File              : vc_print_alphabet.c
 * Author            : Mihail and Enrique
 * Date              : Wed 06 Jan 2019
 */

#include <stdio.h>

int vc_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// Transform a String -> Int
int vc_atoi(char *str)
{
    int len = vc_strlen(str);
    int number = 0;
    int i = 0;
    for (i = 0; i < len; i++)
    {
        number *= 10;
        number += str[i] - 48;
    }
    return number;
}

int main()
{
    printf("%d", vc_atoi("1"));
    printf("%d", vc_atoi("1") + vc_atoi("1"));
}