#include <stdio.h>

//Sum of the First N Natural Numbers: Calculate the sum of the first n natural numbers,
// where n is provided by the user.
int Sum(int n){
    // i iterates with n-1 to sum every Natural number to [N..0]
    for(int i = n-1; i > 0; i--){
        n += i;
    }
    return n;
}

void main(){
    printf("%d", Sum(3));
}