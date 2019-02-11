/**
 * File              : vc_strlcpy.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

unsigned int *vc_strlcpy(char *dest, char *src, unsigned int size) {

}

int main() {
    char dest[35] = "VANCOUVER";
    char str[24] = "abababababababababababa";
    int size = 30;
    printf("%d\n", vc_strlcpy(dest, str, size));
    printf("%s", dest);
    return 0;
}
