#include <inttypes.h>
#include <locale.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

// _Bool flag1 = 1;
// _Bool flag2 = 1;
// _Bool flag3 = 0; 
// bool flag4 = true;
// bool flag5 = false;
// bool flag6 = 0;
// bool flag7 = 1;
char char1 = 'b';
char char2 = 'A';
// wchar_t[4] char3 = 'å';
// char char4 = '\\';
// char char5 = '/';

int main(void) {
    for (int i = 1; i < 6; i++) {
        if (i == 1) {
            printf("Bool %d: ", i);
        }
        else printf("\nBool %d: ", i);    
        if (i == 1) printf("%c", char1);
        if (i == 2) printf("%c", char2);
        // if (i == 3) printf("%c", char3);
        // if (i == 4) printf("%c", char4);
        // if (i == 5) printf("%c", char5);
        // // if (i == 6) printf("%d", char);
        // if (i == 7) printf("%d", char1);
    }
}
