#include <stdio.h>

/* void swap(int a, int b){

	int *pa = &a;
	int *pb = &b;
	int z = *pa;
	*pa = *pb;
	printf("Pre: *pa = %d, *pb = %d, z = %d\n", *pa, *pb, z);
	*pb = z;
	printf("Swap: *pa = %d, *pb = %d\n", *pa, *pb);
} */

void swap(int *pa, int *pb){

	// printf("*z = %d, *pa = %d, *pb = %d\nz = %d, pa = %d, pb = %d\n", z, pa, pb, *z, *pa, *pb);
	int z = *pa;
	*pa = *pb;
	*pb = z;
	return;
}

void swapversus(int c, int d){

	int z = c;
	c = d;
	d = z;
	return;
}

int main(void){

	int a = 69;
	int b = 906;
	int c = 6;
	int d = 1;

	//printf("Pointer: %d -\n", &a);
	printf("Pointer: -\n");
	printf("Before: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After: a = %d, b = %d\n", a, b);

	printf("Versus -\n");
	printf("Vbefore: c = %d, d = %d\n", c, d);
	swapversus(c, d);
	printf("Vafter: c = %d, d = %d\n", c, d);

	return 0;
}
