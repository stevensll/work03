#include <stdio.h>

int main(){
    int three_five(int threshold);
    int smallest_multiple(int number);
    printf("Sum of first 1000 multiples of three or five: %d\n", three_five(1000));
    printf("Smallest multiple of every number from 1-20: %d\n", smallest_multiple(20));
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

int smallest_multiple(int number){
    int counter = 1;
    int found = 1;
    int status = 0;

    while(status == 0){
        found = 1;
        int i = 1;
        for(int i = 1; i < number; i++){
            if(counter % i != 0){
                found = 0;
            }
        }
        if(found ==1){
            found = counter;
            status =1;
        } else{
            counter++;
        }

    }
    return found;

}