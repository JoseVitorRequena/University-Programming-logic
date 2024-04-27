#include <stdio.h>
//Grade Average: Calculate the average of 5 grades provided by the user.

float average(float n, float n1, float n2, float n3, float n4){
    return (n+n1+n2+n3+n4)/5;
}

void main(){
    printf("Sua media e: %0.2f", average(5.2, 6, 9.3, 5.7, 8));
}