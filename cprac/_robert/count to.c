#include <stdio.h>

int main(void){

	void count_to(void){
		static unsigned int counter = 0;
		counter ++;
		printf("%d\n", counter);
	}

	void count(int q){
		int j = 7;
		for (int i = 0; i < q; i++){
			count_to();
		}
	}

    int *func(int i){
        int j = i; // Good
        // static int k = i; Error
        // return &j;
    }

	count(19);

    return 0;
}
