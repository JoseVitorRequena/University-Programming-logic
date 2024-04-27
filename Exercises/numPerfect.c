#include <stdio.h>

void ehPerfeito(int a, int b){
    int sum = 0;
    for (int i = a; i <= b; i++){
        for (int j = 1; j < i; j++){
            if(i % j == 0){
                sum += j;    
            }
        }
        if (sum==i){
            printf("%d ", i);
        }
        sum = 0;
    }
}

int main(){ 
    int a, b;
    scanf("%d %d", &a, &b);
    ehPerfeito(a, b);
    return 0;
}