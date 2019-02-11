/**
 * File              : vs_str_is_printable.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

int vc_str_is_printable(char *str) {

	for (int i = 0;str[i] != '\0'; i++) {

		if (!(str[i] >= 33  && str[i] <= 126)) {

			return 0;

		}

	}
	return 1;
}