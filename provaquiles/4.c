#include <stdio.h>
#include <string.h>

struct Tpessoa{
    char nome[100];
    char telephone[100];
    char cidade[100];
    char data_de_compra[100];
    char data_de_venda[100];
};

struct Tacessorio{
    int valor;
    char descricao[100];
};

struct Tcarro{
    char modelo[100];
    char marca[100];
    int kilometragem;
    int ano;
    int valor;
    struct Tpessoa pessoas[5];
    struct Tacessorio acessorio[10];
};

int main(){
    struct Tcarro carros[100];
    
    for (int i = 0; i < 100; i++){
        printf("%s, %s, %d, %d, %d", carros[i].modelo, carros[i].marca, carros[i].kilometragem, carros[i].ano, carros[i].valor);
        for(int j = 0; j < 5; j++){
            printf("%s, %s, %s, %s, %s", carros[i].pessoas[j].nome, carros[i].pessoas[j].telephone, carros[i].pessoas[j].cidade, carros[i].pessoas[j].data_de_compra, carros[i].pessoas[j].data_de_venda);
        }
        for(int k = 0; k < 10; k++){
            printf("%d, %s", carros[i].acessorio[k].valor, carros[i].acessorio[k].descricao);
        }
        printf("\n");
    }
    return 0;
}