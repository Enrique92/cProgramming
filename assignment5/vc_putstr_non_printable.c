/**
 * File              : vc_putstr_non_printable.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

static void printHexadeciaml(double hex) {
    double quotient = hex;
    double remainder = 0;
    char hexa[2];
    int j = 0;

    while (quotient != 0) {
        remainder = quotient % 16.0;
        if (remainder < 10)
            hexa[j++] = 48 + remainder;
        else
            hexa[j++] = 55 + remainder;
        quotient = quotient / 16;
    }

    for(int i = 2; i >0; i--){
        putchar(hexa[i]);
    }
}

void vc_putstr_non_printable(char *str) {

}

int main() {
    char str[35] = "V A\nN(C)OU:VER;";

    printHexadeciaml(21);
    //printf(vc_putstr_non_printable(str));
    return 0;
}