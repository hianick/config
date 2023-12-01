#include <stdio.h>

void matrix(void) {
    int joe[9][9];
    int *p0 = joe[0];
    int *p1 = joe[1];
    int *p2 = joe[2];
    int *p3 = joe[3];
    int *p4 = joe[4];
    int *p5 = joe[5];

    for (int y = 3; y >= 0; y--) {
        for (int x = 0; x < 3; x++) {
            joe[x][y] = (x*x) * (y*y);
            printf("%d j[%d][%d]\t", joe[x][y], x, y);
        }
        printf("\n");
        for (int x = 0; x < 3; x++) {
            if (y > -1) printf("%d\t\t", &joe[x][y], x, y);
            // printf("%d:[%d,%d]\t", &joe[x][y], x, y); // verify address
        }
        printf("\n");
    }
    printf("\n");
    for (int y = 3; y >= 0; y--) {
        for (int x = 0; x < 3; x++) {
            printf("%d j[%d]+%d\t", *(joe + y), x, y);
        }
        printf("\n");
    }
    printf("\n");
    for (int y = 3; y >= 0; y--) {
        for (int x = 0; x < 3; x++) {
            printf("%d\t", (joe[2] + y));
            if (x == 2) printf("\n");
        }
        for (int x = 0; x < 3; x++) {
            printf("%d\t", *(joe[2] + y));
            if (x == 2) printf("\n");
        }
    }
}

void main(void) {
    matrix();
}
