#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void ptrptr(unsigned int** dptr) {
    printf("%d, %d\n",  dptr, *dptr);
}

void oneptr(unsigned int* ptr) {
    printf("%d, %d\t\n\n",  ptr, *ptr);
    ptrptr(&ptr);
}

int main() {
    unsigned int array[] = {1};
    unsigned int *ptr = calloc(1, sizeof( uint32_t));
    ptr[0] = 3;
    oneptr(ptr);    /* OK, passes an (uint32_t *)  */
    oneptr(array);  /* OK, passes an (uint32_t *)  */
    ptrptr(&ptr);   /* OK, passes an (uint32_t **) */
    // ptrptr(&array); /* ??, passes an (uint32_t *)  */
    return 0;
}
