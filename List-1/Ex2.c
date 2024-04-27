#include <stdio.h>

//  Approval Verification: Given a student's average and the passing average, check whether the student has passed or not.

// average is a function that receive 3 floats calculate the average between
// the 3 numbers and if it's greater than 6 it prints Aproved, else it prints Reproved
void average(float n1, float n2, float n3){
    // Calculate the average
    float ave = (n1+n2+n3)/3;
    // Condition to check if greater than 6
    if (ave > 6){
        printf("Aproved");
    }  else {
        printf("Reproved");
    }
}

void main() {
    // Here we set the 3 floats values
    float n1 = 5.3, n2 = 6.3, n3 = 9;
    // Call average function with the 3 float values
    average(n1,n2,n3);
}