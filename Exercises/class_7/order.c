#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 20

int swap(int *y, int *n){
    int temp = *y;
    *y = *n;
    *n = temp;
}

void insertion(int v[]){
    int x;
    for (int j = 0; j < max; j++){
        x = v[j];
        int i = j - 1;

        while (x < v[i] && i >= 0){
            v[i-1] = v[i];
            i--;
        }       
        v[i + 1] = x;     
    }
    for (int i = 0; i<max; i++){
        printf("%d \n", v[i]);
    }
}

void bubble(){
    
}

void main(){
    int v[max];
    srand(time(NULL));
    for(int i = 0; i< max; i++){
        v[i] = rand()%20+1;
    }

    insertion(v);
}