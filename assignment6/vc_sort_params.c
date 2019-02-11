/**
 * File              : vc_strcmp.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

static int vc_strcmp(char *s1, char *s2) {
    for (; *s1 && *s2; s1++, s2++) {
        if (*s1 - *s2) {
            return *s1 - *s2;
        }
    }
    return *s1 - *s2;
}

int main(int arg, char *names[]) {
    char *tmp;
    int i = 0, j;
    for (int i = 0; names[i]; i++) {
        for (int j = 0; names[j]; j++) {
            if (vc_strcmp(names[i], names[j]) < 0) {
                tmp = names[i];
                names[i] = names[j];
                names[j] = tmp;
            }
        }
    }
    for (i = 0; names[i]; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
