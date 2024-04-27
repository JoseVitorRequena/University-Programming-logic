#include <stdio.h>

int check_number(int n){
    if(n%2 == 0){
        printf("Par\n");
    } else {
        printf("Impar\n");
    }
}

void main(){
    check_number(25);
    check_number(40);
}