/**
 * File              : vc_print_alphabet.c
 * Author            : Daisuke and Enrique
 * Date              : Thu 07 Jan 2019
 */

#include <stdio.h>
#include <string.h>

char *vc_strncpy(char *dest, char *src, unsigned int n)
{
    char *p = src;
    int i;
    for (i = 0; i < n; i++)
    {
        *dest = p[i];
        dest++;
    }

    return dest;
}

int main()
{
    char dest[5];
    char src[5] = "good";
    int characters = 3;
    vc_strncpy(dest, src, characters);
    printf("%s", dest);
    // man strncpy
    // strncpy(dest, src, characters);
    // printf("%s", dest);
    return 0;
}