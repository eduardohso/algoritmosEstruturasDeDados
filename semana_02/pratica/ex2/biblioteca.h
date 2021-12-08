#include "stdio.h"
#include "stdlib.h"

#define TAML 100

typedef struct sContato
{
    char nomeContato[21];
    char numCelular[15];
}Contato;


typedef struct sLista
{
    Contato vetor[TAML];
    int n;
}Lista;

void lista_inicializar(Lista *ptrL){
    ptrL -> n = -1;
}

int lista_cheia(Lista *ptrL){
    if(ptrL->n+1==TAML){
        return 1;
    }else{
        return 0;
    }
}

int lista_inserirFim(Lista *ptrL, Contato contato){
    if(lista_cheia(ptrL)){
        printf("Lista cheia!");
        return 1;
    }
    ptrL->n++;
    ptrL ->vetor[ptrL->n]=contato;

    return 0;
}

void imprimirLista(Lista *ptrL){
    int i;

    printf("\n->Elemento(s) na lista:");
    for(i=0;i<= ptrL->n;i++){
        printf("\nNome do contato: %s",ptrL->vetor->nomeContato);
        printf("\nNumero do contato: %s",ptrL->vetor->numCelular);
    }
}