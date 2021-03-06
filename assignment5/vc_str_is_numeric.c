/**
 * File              : vc_str_is_numeric.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

int vc_str_is_numeric(char *str) {

    // Check if the string is not null
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= 47 && str[i] <= 57)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    //char str[16] = "678758";
    char str[16] = "Vancouver";
    int result;
    result = vc_str_is_numeric(str);
    printf("%d", result);
    return 0;
}
