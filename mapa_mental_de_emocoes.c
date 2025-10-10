#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

typedef struct emocao{
    char tipo[TAM];
    char data[TAM];
    int intensidade;
    char comentario[TAM];
} Emocao;


void inserirEmocao(Emocao nova_emocao, Emocao vetor_emocoes[], int *atual){
    vetor_emocoes[*atual] = nova_emocao;
    (*atual)++;
}

void listarEmocao(Emocao vetor_emocoes[], int *atual){
    printf("=== Lista de emocoes === \n");
    for(int i = 0; i < *atual; i++){
        printf("Tipo: %s,\n Data: %s,\n Intensidade: %d,\n Comentario: %s\n\n", 
            vetor_emocoes[i].tipo, 
            vetor_emocoes[i].data, 
            vetor_emocoes[i].intensidade, 
            vetor_emocoes[i].comentario);
    }
}

int main(){
    int atual = 0; 

    Emocao *vetor_emocoes = malloc(sizeof(Emocao) * 10000); 
    if(vetor_emocoes == NULL){
        printf("Erro ao alocar vetor de emocoes\n");
        return 1;
    }
}
