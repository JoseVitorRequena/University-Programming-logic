#include <stdio.h>

//  Simple temperature converter: Celsius to Farenheit

// Converter is a function that has Celsius as it's input and Farenheit as it's Output
float converter(float celsius){
	float farenheit = (celsius*9/5)+32;	
	return farenheit;
}

void main(){
	// converter funtion is called at this line, with 32 as it's parameter
    printf("Temperature is: %0.2f \n", converter(32));
}
