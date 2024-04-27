#include <stdio.h>
#include <math.h>
//BMI Calculation: Calculate the Body Mass Index (BMI) from the weight and height provided by the user.

float bmi(int altura, float weight){
    return (weight/pow((altura/100), 2));
}

void main(){
    printf("%0.2f", bmi(195, 85.7));
}
