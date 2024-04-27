#include <stdio.h>

//Number to the Square: Given a number, calculate the square of that number using only the addition operator.

// Square is a function that receives a integer N
// and uses as iteration to i [0...n] to sum n value n times
int Square(int n){
    // initializing x as 0
    int x = 0;
    // loop that iterates n as 
    for (int i = 0; i < n; i++){
        x += n;
    }
    return x;
}

void main(){
    //here we call Square function with the n value
    printf("%d", Square(5));
}