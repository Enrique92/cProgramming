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

int main()
{
    char str[] = "123\0";
    printf("%d", vc_strlen(str));
    return 0;
}