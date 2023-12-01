#include <stdio.h>
#include <inttypes.h>
#include <locale.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <stdint.h>
#include <inttypes.h>

int a = 12;
int b = 97;
int c = 30;
int d = 55;
int e = 68;
int ia[5] = {191, 22, 315, 401, 5082};
int *iap[5]; // = {&a, &b, &c, &d, &e};
int dont;
int *p = &ia[0];
int *pp = &ia[0];

void nothing(void) {
    for (int i = 97; i < 123; i++) {
    printf("%d: %c\n", i, i);
    }
}
void simplearray(void){
    for (int i = 0; i < 10; i++) {
    ia[i] = i + 1000;
    printf("ia[%d]: %d\n", i, ia[i]);
    }
}
void arraypointer(void){
    for (int i = 0; i < 3; i++) {
        ia[i] = i * 200 + 51;
        printf("i = %d\n", i);
        printf("ia[i] = %d\n", ia[i]);
        printf("*(ia + i) = %d\n", *(ia + i));
        printf("*(p + i) = %d\n", *(p + i));
        printf("(ia + i) = %d\n", (ia + i));
        printf("&ia[i] = %d\n", &ia[i]);
        printf("(p + i) = %d\n", (p + i));
        *(p + i) = i * 100 + 50;
        printf("\n");
        printf("ia[i] = %d\n", ia[i]);
        printf("*(ia + i) = %d\n", *(ia + i));
        printf("*(p + i) = %d\n", *(p + i));
        printf("(ia + i) = %d\n", (ia + i));
        printf("&ia[i] = %d\n", &ia[i]);
        printf("(p + i) = %d\n", (p + i));
        printf("\n");
    }
}
void pointerarray(void) {
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
        printf("iap[i]: %d\n", iap[i]);
        printf("&iap[%d]: %d\n", i, &iap[i]); //
        printf("*iap[%d]: %d\n", i, *iap[i]); //
        printf("*(iap): %d\n", *(iap)); //
        printf("*(iap): %d\n", *(iap + 0)); //
        printf("(iap + i): %d\n", (iap + i)); //
        printf("*(iap + i): %d\n", *(iap + i)); //
        printf("*&*(iap + i): %d\n", *&*(iap + i)); //
        printf("&*(iap + i): %d\n", &*(iap + i)); //
        printf("&**(iap + i): %d\n", &**(iap + i)); //
        printf("**(iap + i): %d\n", **(iap + i)); //
        printf("\n");
    }
}
void charexample(void){
    char str[11];
    for (int i = 0; i < 10; i++) {
        str[i] = '0' + i;
        printf("str[%d]: %c,\n", i, *(str + i));
    }
    str[10] = '\n';
    printf("%c,", *(str + 10));

}
int main(void) {
    pointerarray();
}
