#include <stdio.h>



long int pow_int(long int exp){

    long int power = 1;

    for(int i = 0; i < exp; i++){
        power = power * exp; 
    }

    

    return power;

}

int main(){
    
    long int n;

    long int pow_result ;
    long int result = 0;

    printf("digite um numero para expnenciar:\n>>");
    scanf("%ld", &n);

    if(n < 1  || n > 15){
        printf("NaN");
        return 0;
    }


    for(int i = 1 ; i <= n; i++){
        pow_result = pow_int(i);
        result = result + pow_result;
        printf("%ld\n", pow_result);
    }

    printf("%ld", result);
    return 0;
}