#include <stdio.h>

int fib(int n){
    if(n == 0 || n == 1) return n;
    else return fib(n-2)+fib(n-1);
}

int main(){
    int n;
    scanf("%d", &n);

    if(n>=1) printf("%d", fib(n-1));
    else printf("NaN");

    return 0;
}