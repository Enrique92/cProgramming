/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>
#include <string.h>

// Copy src to dest
char *vc_strcpy(char *dest, char *src)
{
    char *p = src;
    for (; *p; p++)
    {
        *dest = *p;
        dest++;
    }
    return dest;
}

int main()
{
    char dest[5];
    char src[5] = "good";
    vc_strcpy(dest, src);
    printf("%s", dest);
    // man strcpy
    // strcpy(dest, src);
    // printf("%s", dest);
    return 0;
}