#include <stdio.h>
//Sum of Even Numbers up to 100: Calculate the sum of all even numbers from 1 to 100.

void main(){
    int n = 0;
    for(int i = 1; i<=100; i++){
        if(i%2 == 0){
            n += i;
        }
    }
    printf("%d", n);
}