#include <stdio.h>
#include <stdlib.h>

#define N 4 

const char nome[N]={'A', 'B', 'C', 'D'};

int matriz[N][N];

void addArestaMatriz(int A, int B) {
    matriz[A][B] = 1;
    matriz[B][A] = 1; 
}
void imprimirMatriz(){
    printf("Aresta matriz:\n");
    for(int i=0; i<N; i++){
        printf("%c: ", nome[i]);
    }
    printf("\n");
    for(int i=0; i<N; i++){
        printf("%c: ", nome[i]);
        for(int j=0; j<N; j++){
            printf("%d ", matriz[i][j]);        
        }
        printf("\n");
    }

}

