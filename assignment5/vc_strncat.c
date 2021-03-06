/**
 * File              : vc_strncat.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

char *vc_strncat(char *dest, char *src, int n) {
    int location = 0;
    for (int i = 0; dest[i] != '\0'; ++i) {
        location++;
    }
    for (int i = 0; i < n; ++i) {
        dest[location] = src[i];
        location++;
    }
    dest[location] = '\0';
    return dest;
}

int main() {
    char dest[35] = "VANCOUVER";
    char str[16] = "HELLO";
    int n = 3;
    vc_strncat(dest, str, n);
    printf("%s", dest);
    return 0;
}
