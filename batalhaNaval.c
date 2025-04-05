#include <stdio.h>

// Definindo as contantes para o tamanho das habilidades

const int LINHAS = 3;
const int COLUNAS = 5;

// Funções para chamar durante o int main(), imprimindo assim os tabuleiros, os navios, e as habilidades no segundo tabuleiro

void imprimirTabuleiro(int tabuleiro1[10][10]) {
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Print row numbers
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro1[i][j]); // Print cell values
        }
        printf("\n");
    }
}

void imprimirTabuleiro2(int tabuleiro2[10][10]) {
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Print row numbers
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro2[i][j]); // Print cell values
        }
        printf("\n");
    }
}

// Funções para inserir as habilidades no tabuleiro2, que é o tabuleiro de habilidades

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

//Função que inicializa o projeto

int main() {
	
    int tabuleiro1[10][10] = {0};
    int tabuleiro2[10][10] = {0};

    int navio1 = 1;
    int navio2 = 2;
    int navio3 = 3;
    int navio4 = 4;

    
    int habCone[3][5] = {{0, 0, 5, 0, 0},
                         {0, 5, 5, 5, 0},
                         {5, 5, 5, 5, 5}};

    int habCruz[3][5] = {{0, 0, 6, 0, 0},
                         {6, 6, 6, 6, 6},
                         {0, 0, 6, 0, 0}};

    int habOctaedro[3][5] = {{0, 0, 7, 0, 0},
                             {0, 7, 7, 7, 0},
                             {0, 0, 7, 0, 0}};

//Certos pontos do tabuleiro1 são preenchidos com os navios com os seus respectivos números, e o restante é preenchido com 0s, que representam a água

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

//Output dos dois tabuleiros, navios no primeiro tabuleiro, e as habilidades no segundo tabuleiro

    printf("\n### TABULEIRO BATALHA NAVAL ###\n1- Navio 1 | 2- Navio 2 | 3- Navio 3 | 4- Navio 4\n");
    printf("   A B C D E F G H I J\n");
    
    imprimirTabuleiro(tabuleiro1);
    
    
    
    printf("\n### TABULEIRO BATALHA NAVAL HABILIDADES ###\n5- Cone | 6- Cruz | 7- Octaedro\n");
    printf("   A B C D E F G H I J\n");

    habConeInput(tabuleiro2, habCone, 1, 1);
    habCruzInput(tabuleiro2, habCruz, 6, 3);
    habOctaedroInput(tabuleiro2, habOctaedro, 1, 6);
    imprimirTabuleiro2(tabuleiro2);
    return 0;
}