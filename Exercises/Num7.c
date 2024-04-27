#include <stdio.h>

int ehPar(int num) {
    return num % 2 == 0;
}

float calcularMedia(int a, int b) {
    int soma = 0, quantidade = 0;
    for (int i = a; i <= b; i++) {
        if (ehPar(i) && i%7 == 0) {
            soma += i;
            quantidade++;
        }
    }
    if (quantidade == 0)
        return 0;
    return (float)soma / quantidade;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    float media = calcularMedia(a, b);
    printf("%f\n", media);
}