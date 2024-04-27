#include <stdio.h>

int BinToInt(int n){
    int x, i=0, t=1, r=0;
    while(1){
        if (n<0) break;
        
        for (int j = 0; j<i; j++){
            t *= 2;
        }

        x = n % 10;
        r += x*t;
        x = x/10;
        i++;
    }
    return r;
}

int main(){
    int n;
    scanf("%d", &n);
    if (n>=0){
        printf("%d", BinToInt(n));
    }
    return 0;
}

// 1000 % 10 = 0
// 0 * 2(^0) = 0
// 1000/10 = 100

// 100% 10 = 0
// 0 * 2(^1) = 0
// 100/10 = 10

// 10 % 10 = 0
// 0 * 2(^2) = 0
// 10/10 = 1

// 1 % 10 = 1
// 1 * 2(^3) = 8
// 1/10 = 0.1