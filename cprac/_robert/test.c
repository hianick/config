#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int i, j = 0;
    for(i = 0; i <= 10; i++) {
        j = rand();
        printf("j = %d\n", j);
    }
    return 0;
}