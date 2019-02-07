/**
 * File              : vc_putstr.c
 * Author            : Mihail Urmanschi
 * Date              : 2019-02-06 15:42
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

char *vc_strrev(char *str)
{
    char temp;
    int len = vc_strlen(str) - 1;
    int stop = len / 2;
    int i, k;
    for (i = 0, k = len; i < stop; i++, k--)
    {
        temp = str[k];
        str[k] = str[i];
        str[i] = temp;
    }
    return str;
}

int main()
{
    char str[] = "Hello\0";
    printf("%s\n", vc_strrev(str));
    return 0;
}