#include <stdlib.h>
#include <stdio.h>
#define rows 3
#define cols 3

int** create_game(){
    int** matrix;
    matrix = (int**) calloc(rows, sizeof(int*));
    for(int i = 0;i<cols;i++){
        matrix[i] = calloc(cols, sizeof(int));
    }

    return matrix;
}

void display(int **matrix){
    system("cls");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            switch (matrix[i][j]){
            case 0:
                printf(" ");
                break;
            case 1: 
                printf("X");
                break;
            case 2:
                printf("O");
                break;
            }
            if (j!=2) printf(" | ");
        }
        if (i!=2) printf("\n--+---+--\n");
    }
}   

void update_board(int** matrix, int place, int player){
    switch (place){
    case 1:
        matrix[0][0] = player+1;
        break;
    case 2:
        matrix[0][1] = player+1;
        break;
    case 3:
        matrix[0][2] = player+1;
        break;
    case 4:
        matrix[1][0] = player+1;
        break;
    case 5:
        matrix[1][1] = player+1;
        break;
    case 6:
        matrix[1][2] = player+1;
        break;
    case 7:
        matrix[2][0] = player+1;
        break;
    case 8:
        matrix[2][1] = player+1;
        break;
    case 9:
        matrix[2][2] = player+1;
        break;
    }
}

int get_input(int** matrix, int place){
    int exist = 0;
    while(1){
        printf("\n Which place do you wanna place? ex: 1 2 3... 9: ");
        scanf("%d", &place);
        switch (place){
            case 1:
                if (matrix[0][0] == 0){
                    exist++;
                }
                break;
            case 2:
                if (matrix[0][1] == 0){
                    exist++;
                }
                break;
            case 3:
                if (matrix[0][2] == 0){
                    exist++;
                }
                break;
            case 4:
                if (matrix[1][0] == 0){
                    exist++;
                }
                break;
            case 5:
                if (matrix[1][1] == 0){
                    exist++;
                }
                break;
            case 6:
                if (matrix[1][2] == 0){
                    exist++;
                }
                break;
            case 7:
                if (matrix[2][0] == 0){
                    exist++;
                }
                break;
            case 8:
                if (matrix[2][1] == 0){
                    exist++;
                }
                break;
            case 9:
                if (matrix[2][2] == 0){
                    exist++;
                }
                break;
        }
        if(exist) {
            return place;
            break;
        } else {
            continue;
        }
    }
}

int swap_players(int player){
    player = !player;
    return player;
}

void check_win(){

}

int main(){
    int** matrix = create_game();
    int game = 0, player = 0, place = 0;
    while(!game){
        display(matrix);
        player = swap_players(player);
        place = get_input(matrix, place);
        
        update_board(matrix, place, player);
    }
}

    // validar respostas iguais

    // validar resposta


    //reconhecer forças intermoleculares e forças relativas