#include <stdio.h>

float converter(float celsius){
	float farenheit = (celsius*9/5)+32;	
	return farenheit;
}

void main(){
    printf("Temperature is: %0.2f \n", converter(32));
}
