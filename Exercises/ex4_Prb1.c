#include <stdio.h>

int main(){
    int n = 0, c = 0, c7=0, n35=1;
    float n7 = 0, a7 = 0; 
    while (n != -1){
        scanf("%d", &n);
        if (n >= 0){
            c++;
            if (n%7 == 0){
                c7++;
                n7+=n;
            }
            if (n%3 == 0 && n%5 == 0){
                n35 *= n;
            }
        }
    }
    
    if (c7>0){
        a7 = n7/c7;
    } else {
        a7 = 0;
    }

    printf("%d %f %d", c, a7, n35);
    
    return 0;
}