#include <stdio.h>

long int Spower(long int n){
    long int sum = 0, value = 0;

    for (int i = 1; i<=n; i++){
        value = 1;
        for (int j = 1; j <= i; j++){
            value *= i;
            printf("%d - %ld \n", i, value);
        }
        sum += value;
    }
    return sum;
}

int main(){
    long int n;
    scanf("%ld", &n);
    if(n >= 0 && n <= 15) printf("%ld", Spower(n));
    else printf("NaN");

    return 0;
}