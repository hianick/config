#include <stdio.h>
#include <stdlib.h>

int main(void) {
	if (printf("does this work?") == EOF) {
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
