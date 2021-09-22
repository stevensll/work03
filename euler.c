#include <stdio.h>

int main(){
    int three_five(int threshold);
    printf("Sum of first 1000 multiples of three or five: %d\n", three_five(1000));
    return 0;
}

int three_five(int threshold){
    int sum = 0; 
    threshold-=1;
    while(threshold > 0){
        if(threshold % 5 ==0 || threshold % 3 == 0){
            sum+=threshold;

        }
        threshold--;
    }
    return sum;
}