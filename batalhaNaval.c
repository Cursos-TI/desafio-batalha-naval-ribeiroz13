#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define AGUA 0
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    // preenche o tabuleiro com 0 (água)
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            tabuleiro[i][j] = AGUA;
        }
    }

    // posição dos navios
    int linhaH = 4, colunaH = 2; // horizontal
    int linhaV = 1, colunaV = 7; // vertical

    // coloca o navio horizontal
    for(j = 0; j < TAM_NAVIO; j++){
        if(colunaH + j < TAM){
            tabuleiro[linhaH][colunaH + j] = NAVIO;
        }
    }

    // coloca o navio vertical
    for(i = 0; i < TAM_NAVIO; i++){
        if(linhaV + i < TAM && tabuleiro[linhaV + i][colunaV] == AGUA){
            tabuleiro[linhaV + i][colunaV] = NAVIO;
        }
    }

    // mostra o tabuleiro
    printf("TABULEIRO DE BATALHA NAVAL\n\n");
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
