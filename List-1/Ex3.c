#include <stdio.h>

// Number to the Cube: Given a number, calculate the cube of that number using only the multiplication operator.

// Cube is a functon that receive one 
float cube(float x) {
    // It return the number multiplied by itself 3 times
    return x*x*x;
}

void main() {
    //  In this line u can define
    printf("%0.1f", cube(5.2));
}