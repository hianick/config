#include <stdio.h>

int  main(void) {
    int height = 5, length = 12, width = 182;
    int volume = height * length * width;
    float price = 5.98f; // include f after a constant with a decimal point to avoid compiler errors
    float sell = 5.98f;

    printf("volume.i: %d\n", height * length * width);
    printf("price.f: %f\n", price);
    printf("sell.f: %f\n", sell);
    printf("width.i: %d\n", width);
    return 0;
}