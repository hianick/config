#include <stdio.h>

int main(void){
	
    int one = 111;
    int two = 222;
    int three = 333;
    int four = 444;
    int five = 555;
    int six = 666;

    int sum(int a, int b){
        int one = 1;
        int aa = a + b;
        printf("a + b = %d ; and one = %d", aa, one);
    }

    int sub(int a, int b){
        int bb = a - b;
        printf("a - b = %d", bb);
    }

    int mult(int a, int b){
        int cc = a * b;
        printf("a * b = %d", cc);
    }

    int div(int a, int b){
        int dd = a / b;
        printf("a / b = %d", dd);
    }
	
}
