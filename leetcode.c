#include <stdio.h>
int x = 10;

int main(){
    int y = 0, x1, x2 = 0;
    x1 = x;
    while(1){
        y = x1 % 10;
        x1 = x1 / 10;
        x2 = y+(x2*10);
        
        if(x1 == 0){
            printf("%d\n", x2);
            break;
        }
        
        // 121 % 10 = 1
        // 121 / 10 = 12
        // 1 = 1

        // 12 % 10 = 2
        // 12/10 = 1
        // 2 + 1*10 = 12

        // 1 % 10 = 1
        // 1/10 = 0
        // 1 + 12*10 = 121

        // 0 % 10 = 0
        // 
    }
    
    if (x == x2 && x2 > 0){
        printf("Pal");
    }else{
        printf("n");
    } 
}
