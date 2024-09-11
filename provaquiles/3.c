#include <stdio.h>

int primo (int n, int divisor){
    if (n<=1) return 0;
    if (divisor*divisor > n) return 1;
    if (n%divisor==0)  return 0;
    primo(n, divisor + 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", primo(n, 2));
    return 0;
}

