#include <stdio.h>
//Largest of Three Numbers: Given three numbers, determine which is the largest among them.

float LargestNumber(float *v, size_t size){
    float k = v[0];
    for(int i = 0; i< size; i++ ){  
        if (k <v [i]){
            k = v[i];
        }
    }
    return k;
}

void main(){
    float v[] = {1.46, 1.63, 2.467, 5.23, 2.23, 2.35};
    printf("%f", LargestNumber(v, sizeof(v)/sizeof(v[0])));
}