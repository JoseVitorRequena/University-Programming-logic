#include <stdio.h>
#include <math.h>
//Roots of a Quadratic Equation: Given the coefficients a, b, and c of a quadratic equation, calculate its roots if they exist.

float Quadratic(int a, int b, int c){
    int delta = (pow(b, 2)-4*a*c);
    if (delta < 0){
        printf("Nao existe raiz\n");
        return 0;
    } else {
        return ((-b-sqrt(delta))/(2*a)), ((-b+sqrt(delta))/(2*a));
    }
}

void main(){
    printf("Delta:  %0.2f  %0.2f", Quadratic(4, 6, 2));
}

