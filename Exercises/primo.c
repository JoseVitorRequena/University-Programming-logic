#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void imprimirPrimos(int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int inicio, fim;
    scanf("%d %d", &inicio, &fim);
    imprimirPrimos(inicio, fim);

    return 0;
}