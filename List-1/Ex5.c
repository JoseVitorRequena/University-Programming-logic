#include <stdio.h>

// Factorial Calculation: Given a number n provided by the user, devise an algorithm to calculate the factorial of n.

// Factorial is a function that receives an intebger with value n
// n iterates [n ... 0] multiplying each step with x to achieve the factorial
int Factorial(int n){
    int x = 1;
    for (n; n > 0; n--){
        // x multiplies with each step of n
        x = x * n;
    }
    return x;
}

int main(){
    //Function factorial called with an integer value
    int n;
    scanf("%d", &n);
    if (n >= 0) printf("%d", Factorial(n)); 
    else printf("NaN");

    return 0;
}