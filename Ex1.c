#include <stdio.h>

void Quadrado() {
    int i, x, y;
    printf("Digite o numero: ");
    scanf("%d", &x);
    y = x;
    for (i = 1; i < x; i++){
        y = y + x;
    }
    printf("%d", y);
}

void Fatorial() {
    int x, i;
    printf("Digite o numero: ");
    scanf("%d", &x);
    for (i=x-1;i>0;i--){
        x = x * i;
    }
    printf("%d", x);
}

void Verifica_par() {
    int x;
    printf("Digite o numero: ");
    scanf("%d", &x);
    if (x%2==0){
        printf("Par");
    } else {
        printf("impar");
    }
}

void Soma_n() {
    int x, y, i;
    printf("Digite o numero: ");
    scanf("%d", &x);
    y = 0;
    for (i=0; i<=x ; i++){
        y = y + i;
    }
    printf("Num e: %d", y);
}

void Media(){
    float x, n1, n2, n3, n4, n5;
    printf("Digite 5 notas (Ex: 1.0 2.0 ...): ");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
    x = (n1 + n2 + n3 + n4 + n5)/5;
    printf("A media e: %f", x);
}

void Maior() {
    float x1, x2, x3;
    printf("Digite 3 num (Ex: 1 2 3): ");
    scanf("%f %f %f", &x1, &x2, &x3);
    if ((x1 >= x2) && (x1 >= x3)){
        printf("%f \n", x1);
    }
    if ((x2 >= x1) && (x2 >= x3)) {
        printf("%f \n", x2);
    }   else {
        printf("%f \n", x3);
    }
}

void Tabuada () {
    int x, i;
    printf("Digite um num: ");
    scanf("%d", &x);
    for (i = 1; i<=10; i++ ){
        printf("%d \n", x*i);
    }
}

void Countdown() {
    int i;
    for ( i = 10; i>0; i--){
        printf("%d \n", i);
    }
}

void Contagem_par() {
    int i, x = 0;
    for (i = 1; i <= 100; i++){
        if (i%2==0){
            x = x+i;
        }
    }
    printf("%d", x);
}

void Imc() {
    float imc, peso, altura;
    printf("Digite seu peso e altura (EX: 81.5 1.95) :");
    scanf("%f %f", &peso, &altura);
    imc = peso/(altura*altura);
    printf("%.02f", imc);
}

void Fribonacci(){
    int x, fib, f1=1, f2=0;
    printf("Digite um num: ");
    scanf("%d", &x);
    for (int i=1; i<=x; i++){
        if (i == 1 || i == 0){
            printf("%d \n", i);
        } else {
            fib = f1+f2;
            f2 = f1;
            f1 = fib;
            printf("%d\n", fib);
        }
    }
}

void Primo() {
    int x, Nprimo = 0;
    printf("Digite um numero: ");
    scanf("%d", x);
    for(int i = 1; i < x; i++){
        if (x % i == 0 && i != 1){
            Nprimo ++;
            printf("Nao primo\n");
            break;
        }
    } 
    if (!Nprimo){
        printf("Primo");
    }
}

void Dist(){
    int x = 1, y = 1;
}

int main() {
    Primo();
}