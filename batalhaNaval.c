#include <stdio.h>

const int LINHAS = 3;
const int COLUNAS = 5;

void imprimirTabuleiro(int tabuleiro1[10][10]) {
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Print row numbers
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro1[i][j]); // Print cell values
        }
        printf("\n");
    }
}

void imprimirTabuleiroHabilidade(int tabuleiro2[10][10]) {
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Print row numbers
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro2[i][j]); // Print cell values
        }
        printf("\n");
    }
}

void habConeInput(int tabuleiro2[10][10], int habCone[3][5], int LINHAS, int COLUNAS) {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(LINHAS + i < 10 && COLUNAS + j < 10){
                tabuleiro2[LINHAS + i][COLUNAS + j] = habCone[i][j];
            }; 
        }
    }
}

void habCruzInput(int tabuleiro2[10][10], int habCruz[3][5], int LINHAS, int COLUNAS) {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(LINHAS + i < 10 && COLUNAS + j < 10){
                tabuleiro2[LINHAS + i][COLUNAS + j] = habCruz[i][j];
            }; 
        }
    }
}

void habOctaedroInput(int tabuleiro2[10][10], int habOctaedro[3][5], int LINHAS, int COLUNAS) {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(LINHAS + i < 10 && COLUNAS + j < 10){
                tabuleiro2[LINHAS + i][COLUNAS + j] = habOctaedro[i][j];
            }; 
        }
    }
}

int main() {
	
    int tabuleiro1[10][10] = {0};
    int tabuleiro2[10][10] = {0};

    int habCone[3][5] = {{0, 0, 5, 0, 0},
                         {0, 5, 5, 5, 0},
                         {5, 5, 5, 5, 5}};

    int habCruz[3][5] = {{0, 0, 5, 0, 0},
                         {5, 5, 5, 5, 5},
                         {0, 0, 5, 0, 0}};

    int habOctaedro[3][5] = {{0, 0, 5, 0, 0},
                            {0, 5, 5, 5, 0},
                            {0, 0, 5, 0, 0}};

    int navio1 = 3;
    int navio2 = 3;
    int navio3 = 3;
    int navio4 = 3;

    tabuleiro1[4][1] = navio1;
    tabuleiro1[4][2] = navio1;
    tabuleiro1[4][3] = navio1;
    
    tabuleiro1[7][6] = navio2;
    tabuleiro1[7][7] = navio2;
    tabuleiro1[7][8] = navio2;
    
    tabuleiro1[3][8] = navio3;
    tabuleiro1[2][7] = navio3;
    tabuleiro1[1][6] = navio3;
    
    tabuleiro1[6][3] = navio4;
    tabuleiro1[7][4] = navio4;
    tabuleiro1[8][5] = navio4;


    // tabuleiro2[1][4] = habCone[5][6];
    // tabuleiro2[4][7] = habCruz[1][2];
    // tabuleiro2[8][7] = habOctaedro[8][6];

    printf("\n### TABULEIRO BATALHA NAVAL ###\n");
    printf("   A B C D E F G H I J\n");
    imprimirTabuleiro(tabuleiro1);
    
    habConeInput(tabuleiro2, habCone, 1, 1);
    habCruzInput(tabuleiro2, habCruz, 6, 3);
    habOctaedroInput(tabuleiro2, habOctaedro, 1, 6);
    

    printf("\n### TABULEIRO BATALHA NAVAL HABILIDADES ###\n");
    printf("   A B C D E F G H I J\n");
    imprimirTabuleiroHabilidade(tabuleiro2);
    return 0;
}