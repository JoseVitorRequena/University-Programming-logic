#include <stdio.h>

void main(){
    int r[10], s[10], x[10], y[10], n, sum;
    for (int i = 0; i<10; i++){
        scanf("%d", &n);
        r[i] = n;
    }
    for (int i = 0; i<10; i++){
        scanf("%d", &n);
        s[i] = n;
    }

    for (int i = 0; i<10; i++){
        sum += r[i]+s[i];
        for(int j = 0; j<10; j++){
            if((r[i]==s[j])){
                for(int k = 0; k < i; k++){
                    if (r[i] == x[k]){
                        break;
                    }
                }
            }
        }
    }
    printf("Soma: %d\n", sum);
}