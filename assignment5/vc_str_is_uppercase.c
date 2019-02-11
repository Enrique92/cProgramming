/**
 * File              : vc_str_is_uppercase.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

int vc_str_is_uppercase(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= 'A' && str[i] <= 'Z')) {
            return 0;
        }
    }
    return 1;

}

int main() {
    char str[16] = "VANCOUVER";
    //char str[16] = "vancouver";
    int result;
    result = vc_str_is_uppercase(str);
    printf("%d", result);
    return 0;
}