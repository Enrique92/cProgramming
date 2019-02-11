/**
 * File              : vc_print_params.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

int main(int arg, char *argv[]) {
    int i;
    // The first value we don't print
    for (i = 1; i < arg; i++) {
        // Print the string that we write
        printf("%s\n", argv[i]);
    }
    printf("\n");
}

