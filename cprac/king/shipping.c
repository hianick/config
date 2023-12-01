#include <stdio.h>
#define INCHES_PER_POUND 166

int calc(void);

int main(void) {
    calc();
    return 0;
}

int calc(void) {
    float length, height, width, volume, dweight, limit;
    limit = 166;
    scanf("%f %f %f", &length, &height, &width);
    // length = 12; height = 10; width = 8;
    volume = length * height * width;
    dweight = (volume) / INCHES_PER_POUND;
    printf("vol: %.2f\ndweight: %.2f", volume, dweight);
}
