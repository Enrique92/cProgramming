/**
 * File              : vc_rev_params.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */
#include <stdio.h>

int main(int argc, char **argv) {

	for (int i = argc-1; i > 0; i--) {

		printf("%s\n", argv[i]);

	}

}