#include <stdio.h>

int converter(float celsius){
	float farenheit = (celsius*9/5)+32;	
	return farenheit;
}

void main(){
        printf("Temperature is: %f \n", converter(32));
}
