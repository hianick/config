#include <stdio.h>

double factorial(void);
void fac_print(void);
void fl_calc(void);

int main(){
    fl_calc();
    // fac_print();
    // printf("%lf", factorial());
    return 0;
}

void fl_calc(void) {
    // float a = 1.f / 81;
    float a = 1;
    float b = 0;
    float c = 0;
    for (int i = 0; i < 729; i++) {
        b += a;
        c -= a;
    }
    printf("% f\n", b);
    printf("%f\n", c);
}

void fac_print(void) {
    printf("Calculate factorial: \n\n");
    printf("Enter number : ");
}

double factorial(void) {
    double i;
    scanf("%lf", &i);
    if (i == 0) {
        return 1;
    }
    static double r;
    r = i;
    for (int t = i; t > 2; t--) {
        r *= (t - 1);
        // printf("%lf\n", r);
    }
    printf("%lf! = ", i);
    return r;
}
