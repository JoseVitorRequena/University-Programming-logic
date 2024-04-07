#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *dice(int n){ 
    int *v = (int*) malloc( 6 * sizeof(int));
    for (int i = 0; i < 6; i++){ 
        v[i] = 0;
    }
    srand(time(NULL));
    for (int i = 0; i < n; i++){ 
        int p = rand()%6+1;
        switch (p){
            default: v[p] = v[p]+1; break;
        }
    }
    return v;
}

void main(){
    int n;
    printf("How many throws: ");
    scanf("%d", &n);
    int *l = dice(n);
    for(int i = 0; i < 6; i++){
        printf("Numbers %d: %0.1f\n", i+1, (float)l[i]*100.0/n);
    }
}
