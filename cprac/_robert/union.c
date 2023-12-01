#include <stdio.h>
#include <strings.h>

// union u {
//     struct n {
//         int type;
//     };
//     struct ni {
//         int type;
//         int intnode;
//     };
//     struct nf {
//         int type;
//         double doublenode;
//     };
// };

// union u {
    
//     struct {
//         int type;
//     } n;
    
//     struct {
//         int type;
//         int intnode;
//     } ni;

//     typedef struct nf {
//         int type;
//     double doublenode;
//     };  
// };

struct complex {
  int imag;
  float real;
};

struct number {
  struct complex comp;
  int integer;
} num1;

int main() {

  // initialize complex variables
  num1.comp.imag = 11;
  num1.comp.real = 5.25;

  // initialize number variable
  num1.integer = 6;
	
  // print struct variables
  printf("Imaginary Part: %d\n", num1.comp.imag);
  printf("Real Part: %.2f\n", num1.comp.real);
  printf("Integer: %d", num1.integer);

  return 0;
}
