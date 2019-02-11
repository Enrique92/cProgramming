/**
 * File              : vc_str_is_lowercase.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

int vc_str_is_lowercase(char *str) {

	for (int i = 0;str[i] != '\0'; i++) {

		if (!(str[i] >= 'a' && str[i] <= 'z')) {

			return 0;

		}

	}
	return 1;
}