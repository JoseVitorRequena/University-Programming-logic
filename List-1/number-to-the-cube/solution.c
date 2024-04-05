#include <stdio.h>

int cube(float x) {
    x = x*x*x;
    return x;
}

void main() {
    float x = 5;
    printf("%d", cube(x));
}