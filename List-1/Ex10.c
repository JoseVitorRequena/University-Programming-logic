#include <stdio.h>
//Multiplication Table of a Number: Generate the multiplication table of a number n provided by the user, from 1 to 10.


int mutiplication(int n){
    for (int i = 1; i <= 10; i++){
        printf("%d\n", n*i);
    }
}

void main(){
    int n;
    printf("Type which number you want: ");
    scanf("%d", &n);
    mutiplication(n);
}