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

Emocao *vetor_emocoes = malloc(sizeof(Emocao) * 10000); 

int indice_de_controle = 0; 

void inserirEmocao(Emocao nova_emocao, Emocao vetor_emocoes[], int *atual){
    vetor_emocoes[*atual] = nova_emocao;
    (*atual)++;
}
