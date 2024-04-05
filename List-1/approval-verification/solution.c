#include <stdio.h>

void average(float n1, float n2, float n3){
    float ave = (n1+n2+n3)/3;
    if (ave > 6){
        printf("Aproved");
    }  else {
        printf("Reproved");
    }
}

void main() {
    float n1 = 5.3, n2 = 6.3, n3 = 9;
    average(n1,n2,n3);
}